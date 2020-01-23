#pragma once
#include "Personnage.hh"
#include "Joueur.hh"
#include <sstream>

class Monstre : public Personnage{
public:
    void attaque(Joueur* j);
    int getVieMax(){return vieMax;}
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
    std::string toString();

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
