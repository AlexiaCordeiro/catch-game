#include "Catch.h"
#include "ui_Catch.h"
#include "Player.h"
#include <algorithm>
#include <vector>
#include <QDebug>
#include <QMessageBox>
#include <QActionGroup>
#include <QSignalMapper>

Catch::Catch(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::Catch),
      m_player(Player::player(Player::Red)) {

    ui->setupUi(this);

    QObject::connect(ui->actionNew, SIGNAL(triggered(bool)), this, SLOT(reset()));
    QObject::connect(ui->actionQuit, SIGNAL(triggered(bool)), qApp, SLOT(quit()));
    QObject::connect(ui->actionAbout, SIGNAL(triggered(bool)), this, SLOT(showAbout()));

    QSignalMapper* map = new QSignalMapper(this);
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            QString cellName = QString("cell%1%2").arg(row).arg(col);
            Cell* cell = this->findChild<Cell*>(cellName);
            Q_ASSERT(cell != nullptr);
            Q_ASSERT(cell->row() == row && cell->col() == col);

            m_board[row][col] = cell;

            int id = row * 8 + col;
            map->setMapping(cell, id);
            QObject::connect(cell, SIGNAL(clicked(bool)), map, SLOT(map()));
            QObject::connect(cell, SIGNAL(mouseOver(bool)), this, SLOT(updateSelectables(bool)));
        }
    }
#if QT_VERSION < QT_VERSION_CHECK(6,0,0)
    QObject::connect(map, SIGNAL(mapped(int)), this, SLOT(play(int)));
#else
    QObject::connect(map, SIGNAL(mappedInt(int)), this, SLOT(play(int)));
#endif

    // When the turn ends, switch the player.
    QObject::connect(this, SIGNAL(turnEnded()), this, SLOT(switchPlayer()));

    this->reset();

    this->adjustSize();
    this->setFixedSize(this->size());
}

Catch::~Catch() {
    delete ui;
}
void Catch::play(int id) {
    Cell* cell = m_board[id/8][id%8];

    if (cell == nullptr || !cell->isSelectable())
        return;

    // Block the clicked cell
    cell->setState(Cell::Blocked);

    // Block the neighboring cell(s)
    if (m_player->orientation() == Player::Vertical) {//se horizontal
        if (cell->row() < 7) {//e a coluna menor que 7
            Cell* neighbor = m_board[cell->row() + 1][cell->col()]; //
                neighbor->setState(Cell::Blocked);
        }
    } else {
        if (cell->col() < 7) {
            Cell* neighbor = m_board[cell->row()][cell->col() + 1];

                neighbor->setState(Cell::Blocked);

    }
    }

    busca();
    updateStatusBar();
    emit turnEnded();

    // Check if all cells are either blocked or captured
    bool gameEnded = true;
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* currentCell = m_board[row][col];
            if (!currentCell->isBlocked() && currentCell->isEmpty()) {
                gameEnded = false;
                break;
            }
        }
        if (!gameEnded) {
            break;
        }
    }

    if (gameEnded) {
        // Game over, show the winner or a tie message
        if (m_player->count() > m_player->other()->count()) {
            QMessageBox::information(this, tr("Game Over"), tr("%1 ganhou!").arg(m_player->name()));
        } else if (m_player->count() < m_player->other()->count()) {
            QMessageBox::information(this, tr("Game Over"), tr("%1 ganhou!").arg(m_player->other()->name()));
        } else {
            QMessageBox::information(this, tr("Game Over"), tr("Empatou!"));
        }
        // Reset the game
        reset();
    }
}



void Catch::switchPlayer() {
    // Switch the player.
    m_player = m_player->other();

    // Finally, update the status bar.
    this->updateStatusBar();
}

void Catch::reset() {
    // Reset board.
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* cell = m_board[row][col];
            cell->reset();
        }
    }

    // Reset the players.
    Player* red = Player::player(Player::Red);
    red->reset();

    Player* blue = Player::player(Player::Blue);
    blue->reset();

    m_player = red;

    // Finally, update the status bar.
    updateStatusBar();
}


void Catch::showAbout() {
    QMessageBox::information(this, tr("Sobre"), tr("Catch\n\n - andrei@cefetmg.br"));
}

void Catch::updateSelectables(bool over) {
    Cell* cell = qobject_cast<Cell*>(QObject::sender());
    Q_ASSERT(cell != nullptr);

    // Logic to handle the neighboring cell
    int neighborRow = cell->row();
    int neighborCol = cell->col();

    if (m_player->orientation() == Player::Vertical && cell->row() < 7) {
        ++neighborRow;
    } else if (m_player->orientation() == Player::Horizontal && cell->col() <7) {
        ++neighborCol;
        // Check if the neighboring cell is in column 7 and in the same row
    }

    Cell* neighbor = m_board[neighborRow][neighborCol];

    if (neighborRow >= 8 || neighborCol >= 8) {
        // Neighboring cell is out of bounds, so it doesn't exist
        return;
    }

    qDebug() << "Hovering over cell (row" << cell->row() << ", col" << cell->col() << ")";
    qDebug() << "Neighbor cell (row" << neighbor->row() << ",col " << neighbor->col() << ")";

    if (over) { // If the cursor is over the cell
        if (cell->isEmpty() && neighbor->isEmpty()) {
            // Both cells are empty, so both can be selectable
            cell->setState(Cell::Selectable);
            neighbor->setState(Cell::Selectable);
        } else if (cell->isEmpty() && !neighbor->isEmpty()) {
            // Only the current cell is empty
            cell->setState(Cell::Selectable);
        }
    } else { // If the cursor is no longer over the cell
        if (cell->isSelectable() && neighbor->isSelectable()) {
            // Both cells were selectable, so reset them to empty
            cell->setState(Cell::Empty);
            neighbor->setState(Cell::Empty);
        } else if (cell->isSelectable() && !neighbor->isSelectable()) {
            // Only the current cell was selectable
            cell->setState(Cell::Empty);
        } else if (!cell->isSelectable() && neighbor->isSelectable()) {
            // Only the neighboring cell was selectable
            neighbor->setState(Cell::Empty);
        }
    }
}


void Catch::busca() {
    std::vector<std::vector<bool>> visited(8, std::vector<bool>(8, false));

    // Traverse the game board
    for (int row = 0; row < 8; ++row) {
        for (int col = 0; col < 8; ++col) {
            Cell* cell = m_board[row][col];

            // Skip if the cell is not empty or already visited
            if (!cell->isEmpty() || visited[row][col])
                continue;

            // Perform area capturing starting from the current cell
            std::vector<Cell*> cluster;
            std::vector<Cell*> frontier;

            frontier.push_back(cell);

            while (!frontier.empty()) {
                Cell* currentCell = frontier.back();
                frontier.pop_back();

                int currentRow = currentCell->row();
                int currentCol = currentCell->col();

                // Check if the current cell is within bounds
                if (currentRow < 0 || currentRow >= 8 || currentCol < 0 || currentCol >= 8)
                    continue;

                // Skip if the current cell is not empty or already visited
                if (!m_board[currentRow][currentCol]->isEmpty() || visited[currentRow][currentCol])
                    continue;

                // Mark the current cell as visited
                visited[currentRow][currentCol] = true;

                // Add the current cell to the cluster
                cluster.push_back(currentCell);

                // Check the neighboring cells
                if (currentRow > 0)
                    frontier.push_back(m_board[currentRow - 1][currentCol]); // Top neighbor
                if (currentRow < 7)
                    frontier.push_back(m_board[currentRow + 1][currentCol]); // Bottom neighbor
                if (currentCol > 0)
                    frontier.push_back(m_board[currentRow][currentCol - 1]); // Left neighbor
                if (currentCol < 7)
                    frontier.push_back(m_board[currentRow][currentCol + 1]); // Right neighbor
            }

            // Check the size of the captured area
            if (cluster.size() >= 1 && cluster.size() <= 3) {
                // Capture the area by setting the player's color
                for (Cell* clusterCell : cluster) {
                    clusterCell->setPlayer(m_player);
                     m_player->incrementCount();
                }
                // Increment the player's count

            }
        }
    }
}


void Catch::updateStatusBar() {
    ui->statusbar->showMessage(tr("Vez do %1 (%2 a %3)")
        .arg(m_player->name()).arg(m_player->count()).arg(m_player->other()->count()));
}
