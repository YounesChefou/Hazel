#include "SpriteJoueur.hh"
#include "Vie.hh"
#include "Mana.hh"
#include <QList>

SpriteJoueur::SpriteJoueur(){
    QPixmap spriteStandard("../Ressources/spriteGenerique.png");
    this->setPixmap(spriteStandard);
}

SpriteJoueur::SpriteJoueur(Joueur *j, Pouvoir *p):joueur(j), pictoAttaque(p)
{
    QPixmap spriteStandard("../Ressources/spriteGenerique.png");
    this->setPixmap(spriteStandard);
    HPMax= new Barre(j->getVieMax(),20, Qt::black);
    HP = new Barre(j->getVie(),20,Qt::green);
    MPMax = new Barre(j->getManaMax(),60,Qt::black);
    MP = new Barre(j->getMana(),60,Qt::blue);
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

    //Liste de tous les Items avec lesquels le joueur rentre en collision
    QList<QGraphicsItem*> objets = collidingItems();
    //Tenter de reparer ça ou avoir une liste de tous les objets crées et utiliser collidesWithItem
    //Pour la solution avec une liste, creer un evenement qui se declenchera dès que la position va changer et sera catch par la scene
    //qui ensuite pourra gérer ça
    //Ou creer une fonction collision dans SpriteJoueur qui prend la liste des objets de la scene et verifie s'il y a en effet une collision
    //Utiliser un cast comme test, si cast marche alors objets = Vie ou objets = Mana
    int tailleTab = objets.size();
    for(int i = 0; i < tailleTab; i++){
        if(typeid(*(objets[i])) == typeid(Vie)){ //Le joueur vient de recupérer un objet pour remonter ses points de Vie
            Vie* v = dynamic_cast<Vie*>(objets[i]);
            int recup = v->getrecup();
            this->joueur->setVie(this->joueur->getVie() + recup);
            scene()->removeItem(objets[i]);
        }
        else if(typeid(*(objets[i])) == typeid(Mana)){ //Le joueur a recupéré un objet pour remonter ses points de Magie
            Mana* m = dynamic_cast<Mana*>(objets[i]);
            int recup = m->getrecup();
            this->joueur->setMana(this->joueur->getMana() + recup);
            scene()->removeItem(objets[i]);
        }
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
