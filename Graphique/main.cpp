#include <QApplication>
//#include <QPushButton>
//#include <QLabel>
//#include <QWidget>
//#include <QProgressBar>
//#include <QPicture>
//#include <QEvent>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QGraphicsItem>
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

//    //Fond
//    QLabel fond(&fenetre);
//    QPicture pic;
//    pic.load("../Ressources/decorGenerique.jpg");
//    fond.setPicture(pic);
//    fond.move(0,0);
//    fenetre.show();
//    //Iniatilisation
    QGraphicsScene * scene = new QGraphicsScene(0,0,1350,700);
    QPixmap pix("../Ressources/decorGenerique.jpg");
    scene->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    QGraphicsView * view = new QGraphicsView(scene);

    QPixmap pix2("../Ressources/spriteGenerique.png");
    //Penser à creer une classe SpriteJoueur héritant de QGraphicsItem
    QGraphicsPixmapItem * sprite = new QGraphicsPixmapItem(pix2);
    scene->addItem(sprite);
    view->show();
    return app.exec();
}
