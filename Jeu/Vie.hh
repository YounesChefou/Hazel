#include "Objet.hh"

#ifndef VIE_HH
#define VIE_HH

class Vie: public Objet{
public:
  Vie(int recuperation);
  Vie();
  void recuperation(Joueur a);

};

#endif
