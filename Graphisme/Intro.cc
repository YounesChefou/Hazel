#include "Intro.hh"

Intro::Intro(): QGraphicsScene(0,0,1350,700){
    //Chargement du menu
    QPixmap pix("../Ressources/fond_intro.jpg");
    //Application du fond de la scene
    this->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //Afficher But
    //Afficher la souris + la touche A
}
