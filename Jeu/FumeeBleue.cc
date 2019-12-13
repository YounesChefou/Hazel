#include "FumeeBleue.hh"
#include <time.h>

FumeeBleue::FumeeBleue(){
  srand (time(NULL));
  couleur = "BLEUE";
  consoMana = 4; //Pas définitif
  degats = (8 + (int) rand() /(int) RAND_MAX * (5)); //Pas définitif
}
