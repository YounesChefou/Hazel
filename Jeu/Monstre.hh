#pragma once
#include "Personnage.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    void attaque(Personnage p);
    void setVie(int a){
    if(vie + a >= vieMax)
        vie = vieMax;
    else if(vie - a <= 0){
        vie = 0;
    }
    else{
        vie += a;
    }
    }
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
    std::string toString();

protected:
    int vie;
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
