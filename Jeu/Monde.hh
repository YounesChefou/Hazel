#ifndef MONDE_HH
#define MONDE_HH

#include <iostream>

class Monde{
public:
  Monde(int L, int l);
  Monde();
  ~Monde();
  void deplacement(Personnage pers);
private:
  string** carte;
};
#endif
