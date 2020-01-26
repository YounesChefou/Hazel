#include <QGraphicsView>
#include <QGraphicsScene>
#include "SpriteJoueur.hh"
#include "SpriteMonstre.hh"
//#include "Objet.hh"
#include "Vie.hh"
#include "Mana.hh"
#include <vector>

class HazelGame : public QGraphicsView
{
    Q_OBJECT
public:
    HazelGame();
    ~HazelGame();
    void ajouterVie(int recup, int x, int y);
    void ajouterMana(int recup, int x, int y);
    void ajouterMonstre(SpriteMonstre* m, int x, int y);
    void collisionsObjets();
    void collisionsMonstres();
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event)
    void effacerMorts();
public slots:
    void previentMonstres();
    void joueurInvincible();
    void joueurTransforme();
private:
    QGraphicsScene* scene;
    SpriteJoueur* sprite;
    std::vector<Vie*> objetsVie;
    std::vector<Mana*> objetsMana;
    std::vector<SpriteMonstre*> monstres;
};
