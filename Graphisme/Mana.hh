#pragma once
#include "Objet.hh"

class Mana: public Objet{
public:
  enum { Type = UserType + 1 };
  int type() const override{ return Type;}
  Mana(int recuperation);
  Mana();
  int getrecup(){return recup;}
};
