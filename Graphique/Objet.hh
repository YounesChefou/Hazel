#pragma once
#include <iostream>
#include <string>
#include <QGraphicsPixmapItem>
using namespace std;

class Objet : public QGraphicsPixmapItem{
public:
  int getrecup(){return recup;}

protected:
  string nom;
  int recup;
};

