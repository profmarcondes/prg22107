#include "die.h"

#include <cstdlib>
#include <ctime>

Die::Die() {
    srand(time(NULL));
    roll();
}

void Die::roll() {
    faceValue = rand() % 6 + 1;
}

int Die::getFaceValue() {
    return faceValue;
}
