#pragma once
#include <QGraphicsView>
#include <QGraphicsScene>

class Menu : public QGraphicsScene{
public:
    Menu();
private:
    QPushButton* button;
};
