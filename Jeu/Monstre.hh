#pragma once
#include "Personnage.hh"
#include <string>


class Monstre : public Personnage{
public:
    //Méthodes
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
    std::string virtual toString();
    void attaque(Personnage *p);

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
