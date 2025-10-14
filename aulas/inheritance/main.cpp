#include <iostream>

using namespace std;

class Shape {
	public:
		Shape(int w, int h): _width(w), _height(h) {};
		void setWidth(int value) { _width = value; };
		void setHeight(int value) { _height = value; };

	protected:
		int _width;
		int _height;
};

class Data {
	public:
		Data(string value) {
			_data = value;
		}

		string getData() { return _data; }

	private:
		string _data;
};


class Rectangle: public Shape {
	public:
		Rectangle(int w, int h, string str): Shape(w,h), _tmp(str) {}
		int getArea() { return _width * _height; }

	private:
		int _color;
		Data _tmp;
};

int main (int argc, char* argv[]) {
	cout << "Hello inheritance !" << endl;

	Rectangle rect(5,10, "teste");
	Rectangle r2 = rect;

	r2.setHeight(3);
	r2.setWidth(4);

	cout << "Total area rect: " << rect.getArea() << endl;
	cout << "Total area r2: " << r2.getArea() << endl;

	return 0;
}
