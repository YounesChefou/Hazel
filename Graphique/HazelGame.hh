#include <QGraphicsView>
#include <QGraphicsScene>
#include "SpriteJoueur.hh"

class HazelGame : public QGraphicsView
{
public:
    HazelGame();
private:
    QGraphicsScene* scene;
    SpriteJoueur* sprite;
};
