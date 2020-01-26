#include "Ombre.hh"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

Ombre::Ombre():Monstre(200, SOIN, PHYSIQUE, "NOIRE"){}


Ombre::Ombre(int v):Monstre(v, SOIN, PHYSIQUE, "NOIRE"){}

Ombre::~Ombre(){}
