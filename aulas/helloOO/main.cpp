#include <iostream>

using namespace std;

namespace ifsc {
	namespace prg22107 {
		string msg = "Hello PRG22107!";
	};
	string msg = "Hello IFSC!";
};

class World {
private:
	string name;

public:
	string getName();
	void setName(string value);
	void sayHello();

};

string name = "hugo";
string tmp = "marcondes";

string fullname = name + tmp;

string World::getName() {
	cout << ::name << " / " << name << endl;
	return name;
}

void World::setName(string name) {
	if(name.size())
	this->name = name;
}

void World::sayHello(){
	cout << "Hello " << this->name << "!" << endl;
}

World global_obj;


int main (int argc, char* argv[]) {

	int value = 10;

	printf("Hello World! value = %d\n", value);

	cout << ifsc::prg22107::msg << endl;
	cout << ifsc::msg << endl;
	cout << value << std::endl;

	World obj1;

	//obj1.name = "Hugo";
	obj1.sayHello();

	global_obj.setName("Global World");
	global_obj.sayHello();

	World * ptr = new World;

	ptr->setName("ptr World");
	ptr->sayHello();

	return 0;
}
