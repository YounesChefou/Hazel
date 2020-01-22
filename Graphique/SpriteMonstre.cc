#include "SpriteMonstre.hh"
#include <QTimer>

//Constructeur
SpriteMonstre::SpriteMonstre(Monstre* m){
    QPixmap spriteStd("../Ressources/ennemiFeu.png");
    setPixmap(spriteStd);
    monstreHPMax = new Barre(m->getVieMax(), x(), y() - 10, Qt::black);
    monstreHP = new Barre(m->getVie(), x(), y() - 10, Qt::red);

    QTimer * timer = new QTimer();
    //Chaque fois que le timer arrive à zero, on appelle deplacement
    connect(timer, SIGNAL(timeout()), this, SLOT(deplacement()));

    timer->start(50); //Toutes les 10ms
}

SpriteMonstre::~SpriteMonstre(){}

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

void SpriteMonstre::deplacement()
{
    deplacerDe(-2,2);
}
