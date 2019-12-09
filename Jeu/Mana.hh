#ifndef MANA_HH
#define MANA_HH

#include "Objet.hh"

class Mana: public Objet{
public:
  Mana(int recuperation);
  Mana();
  void recuperation(Joueur a);
};
#endif
