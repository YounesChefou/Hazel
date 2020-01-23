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
    void setVie(int v){vie = v;};
    void recupVie(int recup)
    {
        int vie = this->getVie();
        int vieMax = this->getVieMax();

        if(vie + recup <= vieMax){
            this->setVie(vie + recup);
        }
        else{
            this->setVie(vieMax);
        }
    }
    //Retire des pts de vie au Personnage
    //degats : pts de vie perdus
    void perdVie(int degats){vie -= degats;}
    int getVieMax() const {return vieMax;}
    void attaque(Personnage* p);
    bool estMort(){ return vie <= 0 ? true : false;}
};
