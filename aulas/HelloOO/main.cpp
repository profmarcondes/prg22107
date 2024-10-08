#include <iostream>
#include <stdio.h>
#include "world.h"

using namespace std;

void sayHello(){
    printf("Hello C World!! \n");
}

World global_object("GlobalWorld");

int main()
{
    sayHello();

    World obj1("Mordor");
    obj1.sayHello();
    obj1.setName("");
    obj1.sayHello();

    World * ptr_obj;
    World * ptr = &obj1;
    cout << "A:" << endl;
    ptr->sayHello();

    ptr_obj = new World("DynamicWorld");

    World obj2("PRG22107");
    obj2.sayHello();

    cout << "B:" << endl;
    ptr = &obj2;
    ptr->sayHello();


    World obj3;
    obj3.sayHello();

    obj3.owner("Hugo");
    cout << obj3.owner();

    delete ptr_obj;


    return 0;
}
