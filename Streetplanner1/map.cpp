#include "map.h"

Map::Map()
{}

void Map::addCity(City* city)
{
    StaedteListe.push_back(*city);
    qDebug() << city->getName();
}

void Map::draw(QGraphicsScene& scene)
{
    if(!StaedteListe.isEmpty() || !StrasseListe.isEmpty())
    {
        for(auto it = StaedteListe.begin(); it != StaedteListe.end(); it++)
        {
            it->draw(scene);
        }
        for(auto it = StrasseListe.begin(); it != StrasseListe.end(); it++)
        {
            it->draw(scene);
        }
    }
}

bool Map::addStreet(Street* street)
{
    /*int a = StaedteListe.indexOf(street->getObj1()->getName());
    int b = StaedteListe.indexOf(street->getObj2()->getName());
    if(a != -1 && b != -1)
    {*/
        StrasseListe.push_back(*street);
        return true;
    /*}
    else
    {
        return false;
    }*/
}
