#ifndef WORLD_H
#define WORLD_H

#include <string>

using namespace std;

class World {
private:
    string _name;
    string _owner;

public:
    World(string name = "World");
    ~World();
    void sayHello();
    void setName(string value);

    void owner(string value) { _owner = value; }
    void owner(int a) { _owner = std::to_string(a);}
    string owner() { return _owner; }
};

#endif // WORLD_H
