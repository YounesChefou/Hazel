#ifndef FEU_HH
#define FEU_HH

#include "Monstre.hh"

class Feu: public Monstre{
  Feu(int vieMax);
  Feu();
  void attaque(Joueur a);
};
#endif
