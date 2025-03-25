#include <iostream>
#include <string>

using namespace std;

class HelloWorld{
public:
	void print();
};

void HelloWorld::print() {
	cout << "Hello World!" << endl;
}

int main() {
	HelloWorld obj;
	obj.print();

	return 0;
}