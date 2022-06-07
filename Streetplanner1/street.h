#ifndef STREET_H
#define STREET_H

#include "city.h"

class Street
{
public:
    Street(City* city1, City* city2);
    ~Street() = default;
    void draw(QGraphicsScene& scene);
    City* getObj1();
    City* getObj2();
private:
    City* p_pCity1;
    City* p_pCity2;
};

#endif // STREET_H
