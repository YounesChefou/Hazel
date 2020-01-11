#include <QApplication>
#include "HazelGame.hh"
#include <Qt>

HazelGame * hazelGame;

int main(int argc, char *argv[]){
    QApplication app(argc, argv);

    hazelGame = new HazelGame();
    hazelGame->show();

    return app.exec();
}
