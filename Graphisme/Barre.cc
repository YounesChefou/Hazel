#include "Barre.hh"

Barre::Barre(int vie, int posy, Qt::GlobalColor brush): QGraphicsRectItem(20,posy,vie,20),posy(posy){
    this->setBrush(brush);
}

void Barre::setBarre(int vie){
    this->setRect(20,posy,vie,20);
}
