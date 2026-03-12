#include "world.h"
#include <iostream>

using namespace std;

World::World(string name) {
	cout << "(" << this << ") - World created!" << endl;
	_name = name ;
}

void World::sayHello(){
	cout << "Hello " << this->_name << "!" << endl;
}

