#pragma once
#include "Monstre.hh"


class Feu: public Monstre{
public:
  Feu(int vieMax);
  Feu();
  void attaque(Personnage a);
};
