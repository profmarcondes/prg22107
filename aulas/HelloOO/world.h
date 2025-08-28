#ifndef WORLD_H
#define WORLD_H

#include <string>
using namespace std;

class World {

public:
        World(string name);

        ~World();

		void sayHello();
		void sayGoodbye();
		string getName() { return name; }

	private:
		void say(string msg);
	
	private:
		string name;
		int counter;

};

#endif