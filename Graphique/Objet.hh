#pragma once
#include <iostream>
#include <string>
#include <QGraphicsPixmapItem>
using namespace std;

class Objet : public QGraphicsPixmapItem{
public:
    enum { Type = UserType + 1 };
    int type() const override{ return Type;}

protected:
  string nom;
  int recup;
};
