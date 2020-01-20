#pragma once
#include <QGraphicsRectItem>
#include <QBrush>

class Barre: public QGraphicsRectItem{
public:
    Barre(int vie, int posy,  Qt::GlobalColor brush);
    void setBarre(int vie);
    private:
        int posy;
};
