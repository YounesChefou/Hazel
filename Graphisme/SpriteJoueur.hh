#pragma once
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include "../Jeu/Joueur.hh"
#include "Pouvoir.hh"


class SpriteJoueur : public QGraphicsPixmapItem{
public:
//    static QPixmap spriteStandard;
//    static QPixmap spriteGlace;
//    static QPixmap spriteFeu;
    SpriteJoueur();
    SpriteJoueur (Joueur j, Pouvoir* p);
    SpriteJoueur(QPixmap &p):QGraphicsPixmapItem(p){}
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void changerSprite(char typeFumee);

private:
    Joueur joueur;
    Pouvoir* pictoAttaque;
};
