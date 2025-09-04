#include "die.h"

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

Die::Die() {
    initializeSeed();
    roll();
}

void Die::roll() {
    _faceValue = ( rand() % 6 ) + 1;
    //cout << "Die::roll()=" << _faceValue;
    //cout << "(" << this << ")" << endl;
}

void Die::initializeSeed() {
    srand(time(NULL));
}
