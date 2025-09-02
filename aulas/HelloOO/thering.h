#ifndef THERING_H
#define THERING_H

#include <iostream>

using namespace std;

class TheRing {

public:
void sayIt() {
    cout << "My precious!" << endl;
}

static TheRing* getInstance(unsigned int id = 0){
    if (id >= 4) return NULL;
    if(_instance[id] == NULL)
    _instance[id] = new TheRing();
    
    return _instance[id];
};

private:
    TheRing();
    ~TheRing();
    static TheRing* _instance[4];

};

#endif