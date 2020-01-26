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
    //Constructeur
    HazelGame();
    //Destructeur
    ~HazelGame();

    //Méthodes
    void ajouterVie(int recup, int x, int y);
    void ajouterMana(int recup, int x, int y);
    void ajouterMonstre(SpriteMonstre* m, int x, int y);
    void collisionsObjets();
    void collisionsMonstres();
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void effacerMorts();
    void spawnObjets(int x, int y);
    void finDePartie(int resultat);
    void rejouer();
public slots:
    //Méthodes appelées de manière répétés
    void previentMonstres();
    void joueurInvincible();
    void joueurTransforme();
    void depletionMana();
    void remplissageMana();
    void spawnEnnemis();
private:
    QGraphicsScene* scene;
    SpriteJoueur* sprite;
    int ennemisTues;
    std::vector<Vie*> objetsVie;
    std::vector<Mana*> objetsMana;
    std::vector<SpriteMonstre*> monstres;
};

// Feu* f = new Feu(200);
// SpriteMonstre* spriteM =  new SpriteMonstre(f);
// ajouterMonstre(spriteM, 500, 150);
