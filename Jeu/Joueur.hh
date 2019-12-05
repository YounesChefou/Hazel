#include "Personnage.hh"

#ifndef JOUEUR_HH
#define JOUEUR_HH

class Joueur : public Personnage{
public:
//Méthodes
private:
    int mana;
    Statut S;
    list<string> attaques; //Penser au fait que les attaques vont dépendre du statut,
    // donc fumée.hh doit être inclus
};
#endif
