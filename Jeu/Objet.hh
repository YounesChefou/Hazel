#ifndef OBJET_HH
#define OBJET_HH

#include <iostream>
#include <string>

using namespace std;

class Objet{
public:
  Objet(int recuperation); // Nbre de pts de mana récupéré
  Objet();
  int getrecup(){return recup;}

protected:
  string nom;
  int recup;
};
#endif
