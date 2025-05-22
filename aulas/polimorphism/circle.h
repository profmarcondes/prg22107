#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "shape.h"

using namespace std;

class Circle : public Shape {
public:
	Circle(double radius);

	double area() const  {
		cout << "Circle::area() called" << endl;
		return 3.14 * radius * radius;
	}
	void info() const  {
		cout << "Circle: radius = " << radius << endl;
	}

private:
	double radius;
};


#endif // CIRCLE_H