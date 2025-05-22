#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include "shape.h"

using namespace std;

class Rectangle: public Shape {

public:
	Rectangle(double length, double width);

	double area() const {
		cout << "Rectangle::area() called" << endl;
		return length * width;
	}
	void info() const {
		cout << "Rectangle: length = " << length << ", width = " << width << endl;
	}
	~Rectangle() = default;

private:
	double length;
	double width;
};


#endif // RECTANGLE_H