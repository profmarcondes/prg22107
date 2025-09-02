#include <iostream>

#include "world.h"
#include "thering.h"

using namespace std;

int value = 15;

namespace prg22107 {
	int value = 10;
}

World shire("The Shire");


World* func01(){

	World* obj_ptr;
	obj_ptr = new World("Dynamic World");

	obj_ptr->sayHello();
	obj_ptr->sayGoodbye();

	return obj_ptr;
}


int main (int argc, char* argv[]) {
	cout << "Hello" << endl;

	// cout << "Number of argument = " << argc << endl;
	// for(int i = 0; i < argc; i++) {
	//     cout << argv[i] << endl;
	// }
	// string msg = "Value = ";
	// cout << msg << prg22107::value << endl;

	World meu_mundo("Mordor");
	meu_mundo.sayHello();
	meu_mundo.sayGoodbye();

	string tmp = func01()->getName();
	cout << "Name = " << tmp << endl;

	TheRing* one = TheRing::getInstance(2);
	one->sayIt();

	//delete one;

	return 0;
}
