#pragma once
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include "../Jeu/Joueur.hh"
#include "Pouvoir.hh"
#include "Barre.hh"

class SpriteJoueur : public QGraphicsPixmapItem{
public:
//    static QPixmap spriteStandard;
//    static QPixmap spriteGlace;
//    static QPixmap spriteFeu;
    SpriteJoueur();
    SpriteJoueur(Joueur* j, Pouvoir* p);
    ~SpriteJoueur();
    SpriteJoueur(QPixmap &p):QGraphicsPixmapItem(p){}
    Barre* getHPMax(){return HPMax;}
    Barre* getHP(){return HP;}
    Barre* getMPMax(){return MPMax;}
    Barre* getMP(){return MP;}
    void setHP(int vie){return HP->setBarre(vie);}
    void setMP(int mana){return MP->setBarre(mana);}
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void changerSprite(char typeFumee);
private:
    Joueur* joueur;
    Pouvoir* pictoAttaque;
    Barre* HP;
    Barre* HPMax;
    Barre* MP;
    Barre* MPMax;
};
