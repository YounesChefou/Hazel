// #include "Monde.hh"
// #include <time.h>
//
// Monde::Monde(int L, int l){
//   carte = new string*[L];
//   for(unsigned int i = 0; i < L; i++){
//     carte[i] = new string[l];
//   }
// }
//
// Monde::Monde(){
//   srand (time(NULL));
//   L = (10 + (int) rand() /(int) RAND_MAX * (15));
//   l = (15 + (int) rand() /(int) RAND_MAX * (15));
//   carte = new string*[L];
//   for(unsigned int i = 0; i < L; i++){
//     carte[i] = new string[l];
//   }
// }
//
// Monde::~Monde(){
//   for(unsigned int i = 0; i < L; i++){
//     delete[] table[i];
//   }
// }
