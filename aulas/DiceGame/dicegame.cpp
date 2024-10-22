#include "dicegame.h"
#include <iostream>

using namespace std;

DiceGame::DiceGame() {}

bool DiceGame::play(){
    int fv1, fv2;

    _d1.roll();
    fv1 = _d1.getFaceValue();
    _d2.roll();
    fv2 = _d2.getFaceValue();

    cout << "Dice rolled, <values " << fv1 << ", " << fv2 << endl;

    if( (fv1 + fv2) == 7 ){
        return true;
    } else {
        return false;
    }

}
