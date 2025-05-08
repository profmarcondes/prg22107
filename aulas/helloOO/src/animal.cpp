#include "animal.h"

Animal::Animal(string name, string gender){
    cout << "Animal::Animal(name=" << name << ", gender = ";
    cout << gender << ")" << endl;

    _name = name;
    _gender = gender;
    _age = 0;
}

Animal::~Animal(){
    cout << "Animal::~Animal() called!" << endl;
    info();
}

void Animal::name(string name){
    if(name.length() != 0){
        _name = name;
    } else {
        cout << "Name cannot be empty!" << endl;
    }
}