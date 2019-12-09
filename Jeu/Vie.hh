#ifndef VIE_HH
#define VIE_HH

#include "Objet.hh"

class Vie: public Objet{
public:
  Vie(int recuperation);
  Vie();
  void recuperation(Joueur a);

};

#endif
