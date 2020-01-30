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
    changerSprite(j->getAttaque());
    HPMax= new Barre(j->getVieMax(), 20, 20, Qt::black);
    HP = new Barre(j->getVie(), 20, 20, Qt::green);
    MPMax = new Barre(j->getManaMax(),20, 60, Qt::black);
    MP = new Barre(j->getMana(), 20, 60, Qt::blue);
}

SpriteJoueur::~SpriteJoueur(){}

//Permet au joueur de récuperer de la vie et met à jour la barre de vie de son sprite
void SpriteJoueur::recupererVie(int recup){
    joueur->recupVie(recup);
    setHP(joueur->getVie());
}

//Permet au joueur de récuperer de la mana et met à jour la barre de mana de son sprite
void SpriteJoueur::recupererMana(int recup){
    joueur->recupMana(recup);
    setMP(joueur->getMana());
}

//Permet de changer de sprite
void SpriteJoueur::changerSprite(int element){
    QPixmap spriteStandard("../Ressources/spriteSorciere.png");
    QPixmap spriteGlace("../Ressources/fumeeBleue.png");
    QPixmap spriteFeu("../Ressources/fumeeRouge.png");
    QPixmap spritePoison("../Ressources/fumeeViolette.png");
    QPixmap spriteSoin("../Ressources/fumeeVerte.png");

    switch(element){
        case 0:
            setPixmap(spriteStandard);
            break;
        case 1:
            setPixmap(spriteGlace);
            break;
        case 2:
            setPixmap(spriteFeu);
            break;
        case 3:
            setPixmap(spritePoison);
            break;
        case 4:
            setPixmap(spriteSoin);
            break;
    }
}

//Transforme le joueur et change son sprite
void SpriteJoueur::spriteTransformation(){
    joueur->transformation();
    joueur->estTransforme() ? changerSprite(joueur->getAttaque()) : changerSprite(0);
}
