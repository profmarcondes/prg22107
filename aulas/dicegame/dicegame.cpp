#include "dicegame.h"

bool DiceGame::play() {
    int fv1;
    int fv2;

    _d1->roll();
    fv1 = _d1->getFaceValue();

    _d2->roll();
    fv2 = _d2->getFaceValue();

    if ( (fv1 + fv2) == 7) {
        return true;
    } else {
        return false;
    }

}

DiceGame::DiceGame() {
    _d1 = new Die();
    _d2 = new Die();
}

DiceGame::~DiceGame() {
    delete _d1;
    delete _d2;
}
