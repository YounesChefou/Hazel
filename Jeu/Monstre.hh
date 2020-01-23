#pragma once
#include "Personnage.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    void attaque(Personnage* p);
    int getVieMax(){return vieMax;}
    Statut getForce() const {return force;}
    Statut getFaiblesse() const {return faiblesse;}
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
