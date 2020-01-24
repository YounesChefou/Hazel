#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class Barre: public QGraphicsRectItem{
public:
    Barre(int vie, int posX, int posY,  Qt::GlobalColor brush);
    ~Barre();
    void setBarre(int vie);
    private:
        int posX;
        int posY;
};
