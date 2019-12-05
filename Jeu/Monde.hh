#include <iostream>

#ifndef MONDE_HH
#define MONDE_HH

class Monde{
public:
  Monde(int L, int l);
  Monde();
  void deplacement(Personnage pers);
private:
  string** carte;
};
#endif
