#pragma once
#include "Monstre.hh"


class Glace: public Monstre{
private:
public:
  Glace(int vieMax);
  Glace();
  void attaque(Personnage a);
};
