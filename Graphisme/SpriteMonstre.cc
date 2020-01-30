#include "SpriteMonstre.hh"
#include <QTimer>

//Constructeur
SpriteMonstre::SpriteMonstre(Monstre* m){
    monstre = m;
    attribueSprite();
    monstreHPMax = new Barre(m->getVieMax(), x(), y() - 10, Qt::black);
    monstreHP = new Barre(m->getVie(), x(), y() - 10, Qt::red);
    direction = 0;
    QTimer * timer = new QTimer();
    //Chaque fois que le timer arrive à zero, on appelle deplacement
    connect(timer, SIGNAL(timeout()), this, SLOT(deplacement()));

    timer->start(10); //Toutes les 10ms
}

SpriteMonstre::~SpriteMonstre(){}

//Attribue au monstre l'apparence qui lui convient
void SpriteMonstre::attribueSprite(){
    QPixmap spriteFeu("../Ressources/ennemiFeu.png");
    QPixmap spriteGlace("../Ressources/ennemiGlace.png");
    QPixmap spriteOmbre("../Ressources/ennemiOmbre.png");

    switch(monstre->getForce()){
        case FEU:
            setPixmap(spriteFeu);
            break;
        case GLACE:
            setPixmap(spriteGlace);
            break;
        case POISON:
            setPixmap(spriteOmbre);
            break;
        default:
            break;
    }

}

//Deplace le sprite Monstre et sa barre de vie à la position indiquée
void SpriteMonstre::setPosition(int x, int y){
    setPos(x, y);
    monstreHPMax->setPos(x, y - 10);
    monstreHP->setPos(x, y - 10);
}

//Deplace le SpriteMonstre et sa barre associée de x et de y
void SpriteMonstre::deplacerDe(int nX, int nY){
    setPosition(x()+ nX, y()+ nY);
}

//Fonction appelée toutes les 10ms, déplaçant l'ennemi vers le sprite du joueur
//8 déplacements possibles
void SpriteMonstre::deplacement()
{

    switch(direction) {
        case 0:
            deplacerDe(0,0);    //Immobile
            break;
        case 1:
            deplacerDe(0, -1);  //Nord
            break;
        case 2:
            deplacerDe(1, -1);  //Nord-Est
            break;
        case 3:
            deplacerDe(1, 0);   //Est
            break;
        case 4:
            deplacerDe(1, 1);   //Sud-Est
            break;
        case 5:
            deplacerDe(0, 1);   //Sud
            break;
        case 6:
            deplacerDe(-1, 1);  //Sud-Ouest
            break;
        case 7:
            deplacerDe(-1, 0);  //Ouest
            break;
        case 8:
            deplacerDe(-1, -1); //Nord-Ouest
            break;
        default:
            deplacerDe(0,0);
            break;
    }

}
