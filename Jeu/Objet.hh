#ifndef OBJET_HH
#define OBJET_HH

#include <iostream>
#include <string>
#include "Personnage.hh"

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
