#include "Catch.h"
#include "ui_Catch.h"
#include "Player.h"

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
    Player::Orientation o = m_player->orientation();

    Cell* cell = m_board[id/8][id%8];
    Cell* neighbor;
    if (cell == nullptr || !cell->isSelectable())
        return;
    //Lógica para colocar o neighbor como Blocked junto com o cell
    if(m_player->orientation() == Player::Vertical){
        if(cell->row() == 7) return;
        neighbor = m_board[(cell->row()+1)][cell->col()];
    }else{
        if(cell->col() == 7)return;
        neighbor = m_board[cell->row()][cell->col()+1];
    }
    cell->setState(Cell::Blocked);
    neighbor->setState(Cell::Blocked);

    emit turnEnded();
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
    this->updateStatusBar();
}

void Catch::showAbout() {
    QMessageBox::information(this, tr("Sobre"), tr("Catch\n\nAndrei Rimsa Alvares - andrei@cefetmg.br"));
}


void Catch::updateSelectables(bool over) {
    Cell* cell = qobject_cast<Cell*>(QObject::sender());
    Q_ASSERT(cell != nullptr);

    //Lógica para corrigir erros dos dois quadrinhos
    Player::Orientation o = m_player->orientation();
    Cell* neighbor;

    switch (o) {
    case Player::Vertical:
        neighbor = m_board[cell->row()+1][cell->col()];
        break;
    case Player::Horizontal:
        neighbor = m_board[cell->row()][cell->col()+1];
    default:
        break;
    }

    if (over) {
        if (cell->isEmpty() ){
            cell->setState(Cell::Selectable);
            neighbor->setState(Cell::Selectable);
        }
    }

    else {
        if (cell->isSelectable()){
            cell->setState(Cell::Empty);
            neighbor->setState(Cell::Empty);
        }
    }

}

void Catch::updateStatusBar() {
    ui->statusbar->showMessage(tr("Vez do %1 (%2 a %3)")
        .arg(m_player->name()).arg(m_player->count()).arg(m_player->other()->count()));
}