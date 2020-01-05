#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class Barre: public QGraphicsRectItem{
public:
    Barre(int vie, int posy,  Qt::GlobalColor brush);
    //Faire la mise à jour des barres de vie et mana
};

