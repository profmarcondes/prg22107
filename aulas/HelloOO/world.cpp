#include <iostream>
#include "world.h"

using namespace std;

World::World(string name){
    cout << "(" << this << ") - Constructor" << endl;
    this->_name = name;
}

World::~World(){
    cout << "(" << this << ") - ";
    cout << "Destroying " << _name << endl;
}

void World::sayHello(){
    cout << "(" << this << ") - ";
    cout << "Hello " << _name << "!" << endl;
}
void World::setName(string value){
    cout << "(" << this << ") - setName" << endl;
    if(!value.empty()){
        _name = value;
    }
}
