#pragma once
#include "Objet.hh"

class Vie: public Objet{
public:
  enum { Type = UserType + 1 };
  int type() const override{ return Type;}
  Vie(int recuperation);
  Vie();
  int getrecup(){return recup;}
};
