#include "die.h"
#include <cstdlib>
#include <ctime>

Die::Die() {
    srand(time(NULL));
}

void Die::roll() {
    _faceValue = rand() % 6 + 1;
}

