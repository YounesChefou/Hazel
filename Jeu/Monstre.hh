#pragma once
#include "Personnage.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    void attaque(Personnage p);
    void setVie(int v){vie = v;}
    int getVieMax(){return vieMax;}
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
