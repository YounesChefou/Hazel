#include "Objet.hh"

#ifndef MANA_HH
#define MANA_HH

class Mana: public Objet{
public:
  Mana(int recuperation);
  Mana();
  void recuperation(Joueur a);
};
#endif
