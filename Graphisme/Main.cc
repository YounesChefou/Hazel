#include <QApplication>
#include "HazelGame.hh"
#include "../Jeu/Feu.hh"
#include <Qt>

HazelGame * hazelGame;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    hazelGame = new HazelGame();
    hazelGame->showMaximized();
    //hazelGame->show();

    //test du deplacement d'ennemi
    //Se renseigner sur les public slots

    return app.exec();
}
