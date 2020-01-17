#include "Pouvoir.hh"

//Création du logo de chaque attaque
Pouvoir::Pouvoir(){
    QPixmap physique("../Ressources/physique.png");
    this->setPixmap(physique);
}

Pouvoir::Pouvoir(QString s,QGraphicsScene* scene){
    static int cpt = 0;
    QPixmap *p = new QPixmap(QPixmap(s).scaled(QSize(80,60)));
    QGraphicsPixmapItem *Im_p = (scene->addPixmap(*p));
    Im_p->setOffset(900 + cpt,10);
    cpt += 90;
}

void Pouvoir::changerPicto(int typeFumee)
{
    QPixmap pictoPhysique("../Ressources/physique.png");
    QPixmap pictoSoin("../Ressources/soin.png");
    QPixmap pictoFeu("../Ressources/feu.png");
    QPixmap pictoPoison("../Ressources/poison.png");
    QPixmap pictoGlace("../Ressources/glace.png");

    switch(typeFumee){
        case 0://Physique
            this->setPixmap(pictoPhysique);
            break;
        case 1://Glace
            this->setPixmap(pictoGlace);
            break;
        case 2://Feu
            this->setPixmap(pictoFeu);
            break;
        case 3://Poison
            this->setPixmap(pictoPoison);
            break;
        case 4://Soin
            this->setPixmap(pictoSoin);
            break;

    }
}
