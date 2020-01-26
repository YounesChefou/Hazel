#pragma once
#include <iostream>
// #include <QGraphicsRectItem>
// #include "Barre.hh"

typedef enum {PHYSIQUE, FEU, POISON, SOIN, GLACE, AUCUNE} Statut;
inline std::ostream& operator<<(std::ostream& out, const Statut& stat)
{
    switch(stat){
        case PHYSIQUE:
            out << "PHYSIQUE";
            break;
        case FEU:
            out << "FEU";
            break;
        case POISON:
            out << "POISON";
            break;
        case SOIN:
            out << "SOIN";
            break;
        case GLACE:
            out << "GLACE";
            break;
        case AUCUNE:
            out << "AUCUNE";
            break;
        default:
            out << "woof";
            break;
    }

    return out;
}

class Personnage{
  protected:
    int vie;
    int vieMax;

  public:
    Personnage():vie(200), vieMax(200){}
    Personnage(int v):vie(v), vieMax(200){}
    int getVie(){return vie;}
    void setVie(int v){vie = v;}
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
    void perdVie(int degats){
        std::cout << "Vie : " << this->vie << std::endl;
        this->vie -= degats;
        std::cout << "Vie : " << this->vie << std::endl;
    }
    int getVieMax() {return vieMax;}
    bool estMort(){ return vie <= 0 ? true : false;}
};
