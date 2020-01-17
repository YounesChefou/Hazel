#include <QGraphicsView>
#include <QGraphicsScene>
#include "SpriteJoueur.hh"
//#include "SpriteMonstre.hh"
#include <vector>

class HazelGame : public QGraphicsView
{
public:
    HazelGame();
    ~HazelGame();
    void ajouterVie(int recup, int x, int y);
    void ajouterMana(int recup, int x, int y);
private:
    QGraphicsScene* scene;
    SpriteJoueur* sprite;
   // std::vector<SpriteMonstre*> monstres;
};
