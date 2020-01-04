#include "Pouvoir.hh"

//Création du logo de chaque attaque
Pouvoir::Pouvoir(){
    QPixmap physique(QPixmap("../Ressources/physique.png").scaled(QSize(80,60)));
    this->setPixmap(physique);
}

Pouvoir::Pouvoir(QString s,QGraphicsScene* scene){
    static int cpt = 0;
    QPixmap *p = new QPixmap(QPixmap(s).scaled(QSize(80,60)));
    QGraphicsPixmapItem *Im_p = (scene->addPixmap(*p));
    Im_p->setOffset(900 + cpt,10);
    cpt += 90;
}

void Pouvoir::changerPicto(char typeFumee)
{
    QPixmap pictoPhysique(QPixmap("../Ressources/physique.png").scaled(QSize(80,60)));
    QPixmap pictoSoin(QPixmap("../Ressources/soin.png").scaled(QSize(80,60)));
    QPixmap pictoFeu(QPixmap("../Ressources/feu.png").scaled(QSize(80,60)));
    QPixmap pictoPoison(QPixmap("../Ressources/poison.png").scaled(QSize(80,60)));
    QPixmap pictoGlace(QPixmap("../Ressources/glace.png").scaled(QSize(80,60)));

    switch(typeFumee){
        case 'S'://Physique
            this->setPixmap(pictoPhysique);
            break;
        case 'G'://Glace
            this->setPixmap(pictoGlace);
            break;
        case 'F'://Feu
            this->setPixmap(pictoFeu);
            break;
        case 'P'://Poison
            this->setPixmap(pictoPoison);
            break;
        case 'H'://Soin
            this->setPixmap(pictoSoin);
            break;

    }
}
