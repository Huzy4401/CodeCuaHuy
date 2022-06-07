#include "street.h"

Street::Street(City* city1, City* city2)
    :p_pCity1(city1), p_pCity2(city2)
{}

void Street::draw(QGraphicsScene& scene)
{
    QPen pen ;
    pen.setWidth (1) ;
    pen.setColor (Qt :: black);
    scene.addLine (p_pCity1->getX(), p_pCity1->getY(),p_pCity2->getX(), p_pCity2->getY(), pen);
}

City* Street::getObj1()
{
    return p_pCity1;
}

City* Street::getObj2()
{
    return p_pCity2;
}
