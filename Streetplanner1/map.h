#ifndef MAP_H
#define MAP_H

#include <QVector>
#include "city.h"
#include "street.h"
#include "abstractmap.h"

class Map : public AbstractMap
{
public:
    Map();
    ~Map() = default;
    virtual void addCity(City* city);
    virtual bool addStreet(Street* street);
    void draw(QGraphicsScene& scene);

private:
    QVector<City> StaedteListe;
    QVector<Street>  StrasseListe;
};

#endif // MAP_H
