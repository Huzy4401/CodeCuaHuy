#include "map.h"

Map::Map()
{}

void Map::addCity(City* city)
{
    StaedteListe.push_back(*city);
    qDebug() << city->getName();
    qDebug() << city;
    for(auto it = StaedteListe.begin(); it != StaedteListe.end(); it++)
    {
        qDebug() << it->getName();
        qDebug() << it;
    }
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
    bool a, b;
    for(auto it = StaedteListe.begin(); it != StaedteListe.end(); it++)
    {
        if (it == street->getObj1())
        {
            a = true;
        }
        else
        {
            a = false;
        }
    }
    for(auto it = StaedteListe.begin(); it != StaedteListe.end(); it++)
    {
        if (it == street->getObj2())
        {
            b = true;
        }
        else
        {
            b = false;
        }
    }
    if(a && b )
    {
        StrasseListe.push_back(*street);
        qDebug() << "Success.";
        return true;
    }
    else
    {
        //qDebug() << "City doesnt exist.";
        return false;
    }
}
