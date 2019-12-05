#include <iostream>
#include <string>
#include "Personnage.hh"

#ifndef OBJET_HH
#define OBJET_HH

using namespace std;

class Objet{
public:
  Objet(int recuperation); // Nbre de pts de mana récupéré
  Objet();
  void virtual recuperation(Joueur a);

protected:
  string nom;
  int recup;
};
#endif
