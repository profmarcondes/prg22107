#include <iostream>

#include "world.h"

using namespace std;

int value = 15;

namespace prg22107 {
	int value = 10;
}

World shire("The Shire");

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


	

	return 0;
}
