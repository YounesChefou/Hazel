#pragma once
#include "Personnage.hh"
#include <string>


class Monstre : public Personnage{
public:
    // Monstre(Statut faiblesse, Statut force, std::string couleur):faiblesse(faiblesse), force(force), couleur(couleur){}
    //~Monstre();
    //void virtual attaque(Statut attaqueJoueur, Personnage* j) = 0; //Fonction virtuelle pure
    //Monstre():Personnage(200), faiblesse(AUCUNE), force(AUCUNE), couleur("GRISE"){};
    //Monstre(int v, Statut fa, Statut fo, std::string c):Personnage(v), faiblesse(fa), force(fo), couleur(c){}
    //~Monstre();
    Statut getForce(){return force;}
    Statut getFaiblesse(){return faiblesse;}
    std::string virtual toString();
    void attaque(Personnage *p);

protected:
    Statut faiblesse;
    Statut force;
    std::string couleur;
};
