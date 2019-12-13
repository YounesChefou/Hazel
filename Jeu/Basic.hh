#ifndef BASIC_HH
#define BASIC_HH

#include "Monstre.hh"

class Basic: public Monstre{
  Basic(int vieMax);
  Basic();
  void attaque(Joueur a);
};
#endif
