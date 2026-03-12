#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <string>

using namespace std;

class World {
private:
	string _name;

public:
	World(string name = "undefined_name");
	string name(){ return _name; }
	//void name(string value) { if(value.size() > 3) _name = value; }
	void sayHello();

};

#endif