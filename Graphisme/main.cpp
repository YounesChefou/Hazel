#include <iostream>
#include <QApplication>
#include <QLabel>
//#include <QPicture>
//#include <QEvent>
#include <QPainter>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "pouvoir.hh"
#include "spritejoueur.hh"
#include <QPixmap>
#include <Qt>
#include <list>

using namespace std;

int main(int argc, char *argv[]){
    // ATH affichage;
    QApplication app(argc, argv);

//    //Fond
//    QLabel fond(&fenetre);
//    QPicture pic;
//    pic.load("../Ressources/decorGenerique.jpg");
//    fond.setPicture(pic);
//    fond.move(0,0);
//    fenetre.show();
//    //Iniatilisation

    //Initialisation de la scene
    QGraphicsScene * scene = new QGraphicsScene(0,0,1350,700);

    //Chargement du décor
    QPixmap pix("../Ressources/decorGenerique.jpg");
    //Application du décor au fond de la scene
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));

    //On cree une vue pour visualiser la scene
    QGraphicsView * view = new QGraphicsView(scene);


    //Ajout Attaque
    list<Pouvoir*> tableau;
    Pouvoir *physique = new Pouvoir("../Ressources/physique.png", scene);
    tableau.push_back(physique);
    Pouvoir *feu = new Pouvoir("../Ressources/feu.png", scene);
    tableau.push_back(feu);
    Pouvoir *glace = new Pouvoir("../Ressources/glace.png", scene);
    tableau.push_back(glace);
    Pouvoir *soin = new Pouvoir("../Ressources/soin.png", scene);
    tableau.push_back(soin);
    Pouvoir *poison = new Pouvoir("../Ressources/poison.png", scene);
    tableau.push_back(poison);

    //On charge le sprite du joueur
    QPixmap pix2("../Ressources/spriteGenerique.png");
    //On cree une instance SpriteJoueur avec le sprite chargé
    SpriteJoueur * sprite = new SpriteJoueur(pix2,tableau);
    //On ajoute le sprite à la scene
    //scene->addItem(sprite);

    //Pour que le sprite soit sensible aux contrôles de l'utilisateur,
    //Il doit être "focusable"
    sprite->setFlag(QGraphicsItem::ItemIsFocusable);
    sprite->setFocus();

    //On affiche la vue et on lance l'application
    view->show();
    return app.exec();
}
