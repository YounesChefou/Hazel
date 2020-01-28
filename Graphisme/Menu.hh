#pragma once
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>

class Menu : public QGraphicsScene{
public:
    Menu();
private:
    QPushButton* button;
};
