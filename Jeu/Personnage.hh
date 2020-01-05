#include <iostream>
#include <QGraphicsRectItem>
#include "barre.hh"

#ifndef PERSONNAGE_HH
#define PERSONNAGE_HH

typedef enum {PHYSIQUE, FEU, POISON, SOIN, GLACE, AUCUNE} Statut;
class Personnage{
  protected:
    int vie;
    int vieMax;
    Barre* HPMax;
    Barre* HP;

  public:
    // Personnage(int vieMax);
    // Personnage();
    int getVie() const {return vie;}
    void setVie(int vie);
    int getviemax() const {return vieMax;}
    Barre* getHPMax(){return HPMax;}
    Barre* getHP(){return HP;}

};

#endif
