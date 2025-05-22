#include <iostream>

using namespace std;

#include "shape.h"
#include "rectangle.h"
#include "circle.h"

#include <vector>

int main (int argc, char* argv[]) {
	cout << "Hello shapes !" << endl;

	//Shape obj1;
	//obj1.area();

	vector<Shape*> shapes;
	shapes.push_back(new Rectangle(5.0, 3.0));
	shapes.push_back(new Circle(12.0));
    shapes.push_back(new Rectangle(3.75, 1.25));
    shapes.push_back(new Rectangle(10.0, 3.0));
	shapes.push_back(new Circle(1.5));


	double totalArea = 0.0;
	for (auto shape : shapes) {
		cout << "Area: " << shape->area() << endl;
		shape->info();
		totalArea += shape->area();
	}

	cout << "Total area: " << totalArea << endl;

	Rectangle* rect = new Rectangle(5.0, 3.0);
	Circle* circle = new Circle(2.0);

	cout << "Rectangle area: " << rect->area() << endl;
	cout << "Circle area: " << circle->area() << endl;

	Shape* shape1 = rect;
	Shape* shape2 = circle;

	cout << "Shape 1 area: " << shape1->area() << endl;
	cout << "Shape 2 area: " << shape2->area() << endl;
	cout << "Shape 1 info: ";
	shape1->info();
	cout << "Shape 2 info: ";
	shape2->info();	

	return 0;
}
