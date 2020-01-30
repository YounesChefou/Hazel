#include "Menu.hh"
#include <QGraphicsProxyWidget>

Menu::Menu():QGraphicsScene(0,0,1350,700){
    //Chargement du menu
    QPixmap pix("../Ressources/fond_menu.jpg");
    //Application du fond de la scene
    this->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    press = false;
}

//A tester, positions ne sont pas forcément exactes
void Menu::mousePressEvent(QGraphicsSceneMouseEvent *event){
    QPointF pos = event->lastPos();
    if(pos.rx() > 400  && pos.rx() < 900){
        if(pos.ry() > 500 && pos.ry() < 600){
           press = true;//Si press = true, on passe à l'écran des instructions
        }
    }
}
