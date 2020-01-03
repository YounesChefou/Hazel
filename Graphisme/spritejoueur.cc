#include "spritejoueur.hh"
#include <list>
#include <iostream>

using namespace std;


//Permet de déplacer le sprite
void SpriteJoueur::keyPressEvent(QKeyEvent *event)
{   list<Pouvoir*>::iterator it = attaque.begin();
    switch(event->key()){
        case Qt::Key_Left:
            setPos(x()-10, y());
            break;
        case Qt::Key_Right:
            setPos(x()+10, y());
            break;
        case Qt::Key_Up:
            setPos(x(), y()-10);
            break;
        case Qt::Key_Down:
            setPos(x(), y()+10);
            break;
        case Qt::Key_Shift: //Pour changer attaque vers la droite
            it++;
            selected = *it;
            break;
        case Qt::Key_Q: //Pour changer attaque vers la gauche
            it--;
            selected = *it;
            break;
        default:
            break;
    }
}

//A completer, faire une animation ou autre pour savoir sur quelle attaque on est
