#include "pouvoir.hh"

//Création du logo de chaque attaque
Pouvoir::Pouvoir(QString s,QGraphicsScene* scene){
    static int cpt = 0;
    QPixmap *p = new QPixmap(QPixmap(s).scaled(QSize(80,60)));
    QGraphicsPixmapItem *Im_p = (scene->addPixmap(*p));
    Im_p->setOffset(900 + cpt,10);
    cpt += 90;
}




