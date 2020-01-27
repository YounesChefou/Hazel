#include "Menu.hh"
#include <QGraphicsProxyWidget>

Menu::Menu():QGraphicsScene(0,0,1350,700){
    //Chargement du menu
    QPixmap pix("../Ressources/fond_menu.jpg");
    //Application du fond de la scene
    this->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    //Ajout du bouton
    button = new QPushButton("New Game");
    QGraphicsProxyWidget *proxy = new QGraphicsProxyWidget();
    proxy->setWidget(button);
    this->addItem(proxy);
}

//A tester, puis ajouter évènement sur le bouton
