#include "world.h"
#include <iostream>
using namespace std;

void World::sayHello(){
	counter++;
	say("Hello");
}

void World::sayGoodbye(){
	counter--;
	say("Goodbye");
}

void World::say(string msg){
	cout << msg << " " << name << endl; 
}

World::World(string name) {
    cout << "Construction " << name << "! (" << this << ")" << endl;
    this->name = name;
    
}

World::~World() {
    cout << "Destroying World! (" << this << ")" <<  endl;
}
