#include "Menu.hh"

Menu::Menu():QGraphicsScene(0,0,1350,700){
    //Chargement du menu
    pix = QPixmap("../Ressources/fond_menu.jpg");
    //Application du fond de la scene
    setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
}
