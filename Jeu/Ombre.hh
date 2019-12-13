#ifndef OMBRE_HH
#define OMBRE_HH

#include "Monstre.hh"

class Ombre: public Monstre{
  Ombre(int vieMax);
  Ombre();
  void attaque(Joueur a);
};
#endif
