#pragma once
#include "Monstre.hh"

class Ombre: public Monstre{
public:
  Ombre(int v);
  Ombre();
  void attaque(Personnage a);
};
