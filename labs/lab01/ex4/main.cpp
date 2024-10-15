#include <iostream>
#include "circle.h"

using namespace std;

int main()
{
    cout << "Hello Circle!" << endl;

    Circle obj1(4, 10, 10);
    Circle obj2(5.0);

    cout << "Circle obj1" << endl;
    obj1.printCenter();
    obj1.printRadius();
    obj1.printArea();
    obj1.printPerimeter();
    cout << "=================================" << endl << endl;
    cout << "Circle obj2" << endl;
    obj2.printCenter();
    obj2.printRadius();
    obj2.printArea();
    obj2.printPerimeter();
    cout << "=================================" << endl << endl;

    obj1.printDistanceTo(obj2);

    return 0;
}
