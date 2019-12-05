#include "Personnage.hh"

#ifndef MONSTRE_HH
#define MONSTRE_HH

class Monstre : public Personnage{
protected:
    Statut faiblesse;
    Statut force;
};
#endif
