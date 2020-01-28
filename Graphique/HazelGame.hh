#include <QGraphicsView>
#include <QGraphicsScene>
#include "SpriteJoueur.hh"
#include "SpriteMonstre.hh"
//#include "Objet.hh"
#include "Vie.hh"
#include "Mana.hh"
#include <vector>
#include <QTimer>

class HazelGame : public QGraphicsView
{
    Q_OBJECT
public:
    //Constructeur
    HazelGame();
    //Destructeur
    ~HazelGame();

    //Méthodes Jeu
    void initialiseSceneJeu();
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
    void desactiveToutJeu();

    //Méthode Game Over

public slots:
    //Méthodes de Jeu appelées de manière répétés
    void previentMonstres();
    void joueurInvincible();
    void joueurTransforme();
    void depletionMana();
    void remplissageMana();
    void spawnEnnemis();
    void test();
private:
    //Scene Intro

    //Scene Menu


    //Scene jeu
    QGraphicsScene* sceneJeu;
    SpriteJoueur* sprite;
    QTimer* timerMouv;
    QTimer* timerMana1;
    QTimer* timerMana2;
    QTimer* timerEnnemi;
    int ennemisTues;
    std::vector<Vie*> objetsVie;
    std::vector<Mana*> objetsMana;
    std::vector<SpriteMonstre*> monstres;

    //Scene Game Over
    QGraphicsScene* sceneGameOver;
};
