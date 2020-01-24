#include "Barre.hh"

Barre::Barre(int vie, int posX, int posY, Qt::GlobalColor brush): QGraphicsRectItem(posX,posY,vie,20), posX(posX), posY(posY){
    this->setBrush(brush);
}

Barre::~Barre(){}

void Barre::setBarre(int vie){
    this->setRect(posX,posY,vie,20);
}
