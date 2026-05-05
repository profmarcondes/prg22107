#include <iostream>

using namespace std;

class Data;

class Shape {
	public:
		Shape(int h, int w): height(h), width(w) { 
			cout << this << " Shape constructed !!" << endl;
		}
		void setHeight(int h) { height = h; }
		void setWidth(int w) { width = w; }

	protected:
		int getHeight() { return height; }
		int getWidth() { return width; }

	private:
		int height;
		int width;
	
	friend Data;
};

class Data {
	public:
		Data(string v) { 
			cout << this << "Data constructed!" << endl;
			value = v; 
		}
		string getValue() { return value; }

		void printShape(Shape arg){
			cout << &arg << " -------> Shape(" << arg.height << "," << arg.width << ")" << endl;
		}

	private:
	string value;
};


class Rectangle: public Shape {
	public:
		Rectangle(int h = 10, int w = 10, string data = "no data"): Shape(h,w), value(data) {
			cout << this << " Rectangle constructed!" << endl;
		}
		Rectangle(string data): Shape(10,10), value(data) {

		}
		int getArea() { return getWidth() * getHeight(); }

		void print() { value.printShape(*this); }
	
	private:
		Data value;

};




int main (int argc, char* argv[]) {
	cout << "Hello inheritance !" << endl;

	Rectangle rect(50, 100, "no data");

	Rectangle obj1;
	Rectangle obj2(50);
	Rectangle obj3(25,15);

	Rectangle obj4("hugo");

	obj3.print();


	rect.setHeight(5);
	rect.setWidth(10);

	cout << "Total area = " << rect.getArea() << endl;

	return 0;
}
