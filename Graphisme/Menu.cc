#include "Menu.hh"

Menu::Menu():QGraphicsScene(0,0,1350,700){
    //Chargement du menu
    pix = QPixmap("../Ressources/fond_menu.jpg");
    //Application du fond de la scene
    this->setBackgroundBrush(pix.scaled(1350,700,Qt::IgnoreAspectRatio,Qt::SmoothTransformation));
    press = false;
}

//A tester, positions ne sont pas forcément exactes
void Menu::mousePressEvent(QGraphicsSceneMouseEvent *event){
    switch(event->button()){
        case Qt::LeftButton:
            pos = event->pos();
            std::cout << "x = " << pos.x() << " y = " << pos.y() << std::endl;
            break;
         default:
            break;
    }
    //test la position => segment fault
    if(pos.x() > 0/*400*/  && pos.x() < 400/*900*/){
        //if(pos.y() > 500 && pos.y() < 600){
           press = true;//Si press = true, on passe à l'écran des instructions
        //}
    }
}
