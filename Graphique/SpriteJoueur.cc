#include "SpriteJoueur.hh"

SpriteJoueur::SpriteJoueur(){
    QPixmap spriteStandard("../Ressources/spriteGenerique.png");
    this->setPixmap(spriteStandard);
}

SpriteJoueur::SpriteJoueur(Joueur *j, Pouvoir *p):joueur(j), pictoAttaque(p)
{
    QPixmap spriteStandard("../Ressources/spriteGenerique.png");
    this->setPixmap(spriteStandard);
}

//Permet de déplacer le sprite
void SpriteJoueur::keyPressEvent(QKeyEvent *event)
{
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
        default:
            break;
    }
}

//Test du changement de sprite
void SpriteJoueur::mousePressEvent(QGraphicsSceneMouseEvent *event){
    static int d = 0;
    if(event->button() == Qt::LeftButton){
        switch(d){
            case 0:
            this->changerSprite('S');
            break;
            case 1:
            this->changerSprite('G');
            break;
            case 2:
            this->changerSprite('F');
            break;
        }
    }

    d++;
    if(d >= 3) d = 0;
}
//Permet de changer de sprite
void SpriteJoueur::changerSprite(char typeFumee){
    QPixmap spriteStandard("../Ressources/spriteGenerique.png");
    QPixmap spriteGlace("../Ressources/fumeeBleue.png");
    QPixmap spriteFeu("../Ressources/fumeeRouge.png");

    switch(typeFumee){
        case 'S':
            this->setPixmap(spriteStandard);
            break;
        case 'G':
            this->setPixmap(spriteGlace);
            break;
        case 'F':
            this->setPixmap(spriteFeu);
            break;
    }
}
