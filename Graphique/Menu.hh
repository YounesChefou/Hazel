#pragma once
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsSceneMouseEvent>
#include <QPointF>
#include <QPixmap>
#include <iostream>

class Menu : public QGraphicsScene{
public:
    Menu();
    QPixmap getPix(){return pix;}
private:
    QPixmap pix;
};
