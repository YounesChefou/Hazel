#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsView>
//#include "SpriteJoueur.hh"
//#include "../Jeu/Joueur.hh"
#include "HazelGame.hh"
//#include <QPixmap>
#include <Qt>

HazelGame * hazelGame;

int main(int argc, char *argv[]){
    // ATH affichage;
    QApplication app(argc, argv);
    hazelGame = new HazelGame();
    hazelGame->show();
//    //Initialisation de la scene
//    QGraphicsScene * scene = new QGraphicsScene(0,0,1350,700);

//    //Chargement du décor
//    QPixmap pix("../Ressources/decorGenerique.jpg");
//    //Application du décor au fond de la scene
//    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
//    //On cree une vue pour visualiser la scene
//    QGraphicsView * view = new QGraphicsView(scene);

//    //Barre de vie max
//    QRect HPmax(20,20,100,20);
//    QGraphicsRectItem rectHPmax(HPmax);
//    rectHPmax.setBrush(Qt::black);
//    scene->addItem(&rectHPmax);

//    //Barre de vie variante
//    QRect HP(20,20,50/* 100 * PM/PMmax */,20);
//    QGraphicsRectItem rectHP(HP);
//    rectHP.setBrush(Qt::green);
//    scene->addItem(&rectHP);

//    //Barre de mana max
//    QRect MPmax(20,60,100,20);
//    QGraphicsRectItem rectMPmax(MPmax);
//    rectMPmax.setBrush(Qt::black);
//    scene->addItem(&rectMPmax);

//    //Barre de mana variante
//    QRect MP(20,60,50/* 100 * HP/HPmax */,20);
//    QGraphicsRectItem rectMP(MP);
//    rectMP.setBrush(Qt::blue);
//    scene->addItem(&rectMP);

//    //On charge le sprite du joueur
//    //QPixmap pix2("../Ressources/spriteGenerique.png");
//    //On cree une instance SpriteJoueur avec le sprite chargé
//    //SpriteJoueur * sprite = new SpriteJoueur(pix2);
//    //On ajoute le sprite à la scene
//    Joueur j(150);
//    Pouvoir* basic = new Pouvoir();
//    SpriteJoueur * sprite = new SpriteJoueur(&j, basic);
//    scene->addItem(sprite);
//    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
//    //Il doit être "focusable"
//    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
//    sprite->setFocus();

//    //On affiche la vue et on lance l'application
//    view->show();
    return app.exec();
}
