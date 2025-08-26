#include <iostream>

using namespace std;

int value = 15;

namespace prg22107 {
	int value = 10;
}
	
class World {
	public:
		void sayHello();
		void sayGoodbye();

		void setName(string value);
		string getName() {
			return name;
		}

	private:
		void say(string msg);
	
	private:
		string name;
		int counter;
};
	
void World::sayHello(){
	counter++;
	say("Hello");
}

void World::sayGoodbye(){
	counter--;
	say("Goodbye");
}

void World::setName(string value){
	if(value != ""){
		name = value;
	} else {
		cerr << "Invalid name ! Names could not be empty!" << endl;
	}
}


void World::say(string msg){
	cout << msg << " " << name << endl; 
}

int main (int argc, char* argv[]) {
	cout << "Number of argument = " << argc << endl;
	for(int i = 0; i < argc; i++) {
		cout << argv[i] << endl;
	}

	string msg = "Value = ";
	cout << msg << prg22107::value << endl;

	World meu_mundo;
	meu_mundo.setName("Mordor");
	meu_mundo.sayHello();
	meu_mundo.setName("The Shire");
	meu_mundo.sayGoodbye();

	return 0;
}
