#include "circle.h"
#include <iostream>
#include <cmath>

using namespace std;

Circle::Circle(float area){
    _radius = sqrt(area/M_PI);
    _x = 0;
    _y = 0;
}

Circle::Circle(float radius, float x, float y)
{
    if(radius > 0)
        _radius = radius;
    else
        _radius = 1;
    _x = x;
    _y = y;
}

void Circle::setRadius(float r)
{
    if(r > 0) _radius = r;
}

void Circle::scaleRadius(float percent)
{
    _radius *= percent;
}

void Circle::setPosition(float x, float y)
{
    _x = x;
    _y = y;
}

void Circle::printRadius()
{
    cout << "Circle(" << this << ") radius = ";
    cout << _radius << endl;
}

void Circle::printCenter()
{
    cout << "Circle(" << this << ") center = ";
    cout << "(" << _x ;
    cout << "," << _y << ")" << endl;
}

void Circle::printArea()
{
    cout << "Circle(" << this << ") area = ";
    cout << area() << endl;
}

void Circle::printPerimeter()
{
    cout << "Circle(" << this << ") perimeter = ";
    cout << perimeter() << endl;
}

void Circle::printDistanceTo(Circle obj)
{
    cout << "Circle(" << this << ") distanceTo = ";
    cout << distanceTo(obj) << endl;
}

float Circle::area()
{
    return M_PI * _radius * _radius;
}

float Circle::distanceTo(Circle obj)
{
    float delta_x = this->_x - obj._x;
    float delta_y = this->_y - obj._y;
    return sqrt((delta_x*delta_x) + (delta_y*delta_y));
}

float Circle::perimeter()
{
    return 2 * M_PI * _radius;
}
