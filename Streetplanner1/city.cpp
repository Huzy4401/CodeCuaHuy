#include "city.h"

City::City(QString name, int x, int y)
    :pName(name), pX(x), pY(y)
{}

void City::draw(QGraphicsScene& scene)
{
    QGraphicsTextItem* text = new QGraphicsTextItem;
    scene.addEllipse(pX, pY, 4, 4 ,QPen(Qt::black), QBrush(Qt::red));
    text->setPos(pX, pY);
    text->setPlainText(pName);
    scene.addItem(text);
}

QString City::getName() const
{
    return pName;
}

int City::getX() const
{
    return pX;
}

int City::getY() const
{
    return pY;
}
