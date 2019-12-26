#pragma once
#include "Monstre.hh"

class Ombre: public Monstre{
public:
  Ombre(int vieMax);
  Ombre();
  void attaque(Personnage a);
};
