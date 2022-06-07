#ifndef CITY_H
#define CITY_H

#include<QString>
#include<QGraphicsScene>
#include<QGraphicsTextItem>

class City
{
public:
    City(QString name, int x, int y);
    ~City() = default;
    void draw(QGraphicsScene& scene);
    QString getName() const;
    int getX() const;
    int getY() const;
private:
    QString pName;
    int pX;
    int pY;
};

#endif // CITY_H
