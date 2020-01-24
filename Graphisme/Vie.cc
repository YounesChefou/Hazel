#include "Vie.hh"
#include <time.h>


Vie::Vie(int recuperation){
  recup = recuperation;
  nom = "VIE";
  QPixmap temp("../Ressources/Vie.png");
  this->setPixmap(temp);

}
Vie::Vie(){
  srand (time(NULL));
  recup = (10 + (int) rand() /(int) RAND_MAX * (15));
  nom = "VIE";
}
