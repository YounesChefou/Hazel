#pragma once
#include <QGraphicsItem>
#include <QKeyEvent>
#include "pouvoir.hh"
#include <list>
#include <iostream>

using namespace std;

class SpriteJoueur : public QGraphicsPixmapItem{
public:
    SpriteJoueur(QPixmap &p, std::list<Pouvoir*> l):QGraphicsPixmapItem(p),attaque(l),selected(attaque.front()){}
    void keyPressEvent(QKeyEvent *event);
private:
    std::list<Pouvoir*> attaque;
    Pouvoir* selected;
};
