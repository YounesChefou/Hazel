#pragma once
#include "Personnage.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    void attaque(Personnage* p);
    int getVieMax(){return vieMax;}
    std::string getForce() {return "FEU";}
    Statut getFaiblesse() const {return faiblesse;}
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string strForce;
    std::string couleur;
};
