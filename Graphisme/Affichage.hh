#pragma once
#include <QGraphicsRectItem>
#include <QRect>
#include "../Jeu/Joueur.hh"

class Affichage: public QGraphicsRectItem{
public:
    Affichage(Joueur j);
private:
    QGraphicsRectItem HP;
    QGraphicsRectItem MP;
    Joueur joueur;
};


