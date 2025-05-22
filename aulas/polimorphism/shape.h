#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>

using namespace std;

class Shape {
public:
	Shape();
	virtual double area() const = 0;
	virtual void info() const = 0;
};


#endif // SHAPE_H