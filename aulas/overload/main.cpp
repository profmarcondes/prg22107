#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int variavel = 10;
int soma(const int &p1, const int &p2){
	cout << "Primeira versão" << endl;
	int result = p1 + p2;
	return result;
}

class Hugo; // Forward declaration

class Box {
	public:
		Box(double l = 1.0, double h = 1.0, double b = 1.0){
			_length = l;
			_height = h;
			_breadth = b;
		}

		double volume() const {
			return _length * _breadth *_height;
		}

		void hugo() const {
			cout << "This pointer = " << this << endl;
		}

		friend ostream& operator<<(ostream& out, const Box &b){
			out << "Box(" << b._length << "," <<  b._height << "," <<  b._breadth << ")";
			return out;
		}

		friend istream& operator>>(istream& input, Box &b){
			cout << "Enter length: ";
			input >> b._length;
			cout << "Enter height: ";
			input >> b._height;
			cout << "Enter breadth: ";
			input >> b._breadth;
			return input;
		}

		bool operator<(const Box &arg){
			return ( this->volume() < arg.volume() );
		}

		Box operator+(const Box &arg){
			Box ret;

			ret._length = this->_length + arg._length;
			ret._height = this->_height + arg._height;
			ret._breadth = this->_breadth + arg._breadth;

			return ret;
		}

		//friend Box operator+(const Box &arg1, const Box &arg2);

		friend Hugo;

	private:
		double _length;
		double _height;
		double _breadth;
		Hugo*  _attributo;
};

class Hugo {
	public:
	void printBox(const Box &box){
		cout << box._length << endl;
	}
};
/*
Box operator+(const Box &arg1, const Box &arg2){
	Box ret;

	ret._length = arg1._length + arg2._length;
	ret._height = arg1._height + arg2._height;
	ret._breadth = arg1._breadth + arg2._breadth;

	return ret;
}
*/

int main (int argc, char* argv[]) {
	cout << "Hello overload !" << endl;
	
	int * iptr;
	iptr = &variavel;
	int a = 10;
	int b = 5;
	cout << "A soma é " << soma(a,b) << endl;
	cout << "O valor de a é " << a << endl;
	cout << "O valor de b é " << b << endl;
	
	Box caixa01;
	Box caixa02(1.0,2.0,3.0);

	cin >> caixa01;

	caixa01.hugo();
	caixa02.hugo();

	cout << "Caixa01 = " << caixa01 << endl;
	cout << "Caixa02 = " << caixa02 << endl;

	Box caixaGrande;

	caixaGrande = caixa01 + caixa02;

	cout << "caixaGrande = " << caixaGrande << endl;

	vector<Box> container;

	container.push_back(caixaGrande);
	container.push_back(caixa01);
	container.push_back(caixa02);

	for(auto element: container){
		cout << element << endl;
	}

	cout << "Sorting container" << endl;
	sort(container.begin(), container.end());

	for(auto element: container){
		cout << element << endl;
	}

	string hello("Hello");
	string world("World");

	string hello_world = hello + " " + world;
	cout << hello_world << endl;

	Hugo obj;

	obj.printBox(caixaGrande);



	return 0;
}
