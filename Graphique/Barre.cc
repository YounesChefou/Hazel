#include "Barre.hh"

Barre::Barre(int vie, int posy, Qt::GlobalColor brush): QGraphicsRectItem(20,posy,vie,20){
    this->setBrush(brush);
}
