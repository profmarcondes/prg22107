#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class World {
private:
    string _name;
public:
    World();
    void sayHello();
    void setName(string value);
};

void sayHello(){
    printf("Hello C World!! \n");
}

World::World(){
    _name = "World";
}

void World::sayHello(){
    cout << "Hello " << _name << "!" << endl;
}
void World::setName(string value){
    if(!value.empty()){
        _name = value;
    }
}

int main()
{
    sayHello();

    World obj;
    obj.sayHello();
    obj.setName("");
    obj.sayHello();
    obj.setName("PRG22107");
    obj.sayHello();

    return 0;
}
