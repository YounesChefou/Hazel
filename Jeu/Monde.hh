#ifndef MONDE_HH
#define MONDE_HH

#include <iostream>

class Monde{
public:
  Monde(int L, int l);
  Monde();
  ~Monde();
private:
  string** carte;
};
#endif
