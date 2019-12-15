#pragma once
#include "Monstre.hh"


class Feu: public Monstre{
  Feu(int vieMax);
  Feu();
  void attaque(Personnage a);
};
