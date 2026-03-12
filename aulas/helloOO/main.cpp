#include <iostream>
#include "world.h"

using namespace std;

namespace ifsc {
	namespace prg22107 {
		string msg = "Hello PRG22107!";
	};
	string msg = "Hello IFSC!";
};

string name = "hugo";
string tmp = "marcondes";

string fullname = name + tmp;

World global_obj("Global World");

int main (int argc, char* argv[]) {

	int value = 10;

	printf("Hello World! value = %d\n", value);

	cout << ifsc::prg22107::msg << endl;
	cout << ifsc::msg << endl;
	cout << value << std::endl;

	World obj1;//("Obj1 world");

	//obj1.name = "Hugo";
	obj1.sayHello();

	//global_obj.name("Global World");
	global_obj.sayHello();

	World * ptr = new World("Ptr World");

	//ptr->name("ptr World");
	ptr->sayHello();

	return 0;
}
