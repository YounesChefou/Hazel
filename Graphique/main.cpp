#include <QApplication>
//#include <QPushButton>
//#include <QLabel>
//#include <QWidget>
//#include <QProgressBar>
//#include <QPicture>
//#include <QEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "SpriteJoueur.hh"
#include "../Jeu/Joueur.hh"
#include <QPixmap>
#include <Qt>

int main(int argc, char *argv[]){
    // ATH affichage;
    QApplication app(argc, argv);
//    QWidget fenetre;
//    fenetre.setFixedSize(1350,700);
//    //Fenêtre de Jeu
//    //Nom du Joueur
//    QLabel Nom(&fenetre);
//    Nom.setText("Joueur");
//    Nom.move(55,0);

//    //Barre de Vie
//    QLabel LPV(&fenetre);
//    LPV.setText("PV");
//    LPV.move(10,25);

//    QProgressBar PV(&fenetre);
//    PV.setTextVisible(false);
//    PV.move(30,20);
//    PV.setValue(100/*PV Joueur*/);
//    PV.setMinimum(0);
//    PV.setMaximum(100/*PV max Joueur*/);

//    //Barre de Mana
//    QLabel LHP(&fenetre);
//    LHP.setText("HP");
//    LHP.move(10,65);

//    QProgressBar HP(&fenetre);
//    HP.setTextVisible(false);
//    HP.move(30,60);
//    HP.setValue(100/*HP max Joueur*/);
//    HP.setMinimum(0);
//    HP.setMaximum(100/*HP max Joueur*/);
//    //Iniatilisation

    //Initialisation de la scene
    QGraphicsScene * scene = new QGraphicsScene(0,0,1350,700);

    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //On cree une vue pour visualiser la scene
    QGraphicsView * view = new QGraphicsView(scene);

    //Barre de vie max
    QRect HPmax(20,20,100,20);
    QGraphicsRectItem rectHPmax(HPmax);
    rectHPmax.setBrush(Qt::black);
    scene->addItem(&rectHPmax);

    //Barre de vie variante
    QRect HP(20,20,50/* 100 * PM/PMmax */,20);
    QGraphicsRectItem rectHP(HP);
    rectHP.setBrush(Qt::green);
    scene->addItem(&rectHP);

    //Barre de mana max
    QRect MPmax(20,60,100,20);
    QGraphicsRectItem rectMPmax(MPmax);
    rectMPmax.setBrush(Qt::black);
    scene->addItem(&rectMPmax);

    //Barre de mana variante
    QRect MP(20,60,50/* 100 * HP/HPmax */,20);
    QGraphicsRectItem rectMP(MP);
    rectMP.setBrush(Qt::blue);
    scene->addItem(&rectMP);

    //On charge le sprite du joueur
    //QPixmap pix2("../Ressources/spriteGenerique.png");
    //On cree une instance SpriteJoueur avec le sprite chargé
    //SpriteJoueur * sprite = new SpriteJoueur(pix2);
    //On ajoute le sprite à la scene
    Joueur j(150);
    Pouvoir* basic = new Pouvoir();
    SpriteJoueur * sprite = new SpriteJoueur(&j, basic);
    scene->addItem(sprite);
    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
    //Il doit être "focusable"
    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
    sprite->setFocus();

    //On affiche la vue et on lance l'application
    view->show();
    return app.exec();
}
