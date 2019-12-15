#pragma once
#include "Personnage.hh"

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

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
