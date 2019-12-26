#pragma once
#include "Monstre.hh"


class Glace: public Monstre{
private:
public:
  Glace(int v);
  Glace();
  void attaque(Personnage a);
};
