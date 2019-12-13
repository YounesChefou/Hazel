#ifndef GLACE_HH
#define GLACE_HH

#include "Monstre.hh"

class Glace: public Monstre{
private:
public:
  Glace(int vieMax);
  Glace();
  void attaque(Joueur a);
};
#endif
