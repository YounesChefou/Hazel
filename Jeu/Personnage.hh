#pragma once
#include <iostream>
// #include <QGraphicsRectItem>
// #include "Barre.hh"

typedef enum {PHYSIQUE, FEU, POISON, SOIN, GLACE, AUCUNE} Statut;
class Personnage{
  protected:
    int vie;
    int vieMax;
    // Barre* HPMax;
    // Barre* HP;

  public:
    int getVie() const {return vie;}
    void setVie(int vie);
    int getVieMax() const {return vieMax;}
    bool estMort(){ return vie =< 0 ? true : false;}

    // Barre* getHPMax(){return HPMax;}
    // Barre* getHP(){return HP;}

};
