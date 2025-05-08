#ifndef WORLD_H
#define WORLD_H

#include <iostream>
#include <string>

using namespace std;

class World{
    string _name;

    public:
        World(string name = "World"){
            _name = name;
        }
        void print();
};

#endif // WORLD_H