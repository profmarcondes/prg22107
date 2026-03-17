#include "dicegame.h"

#include <iostream>

using namespace std;

bool DiceGame::play() {
    int fv1, fv2;

    die1.roll();
    fv1 = die1.getFaceValue();

    die2.roll();
    fv2 = die2.getFaceValue();

    cout << "Dados lançados: " << fv1 << "+" << fv2 << " = " << fv1+fv2 << endl;

    return ( (fv1+fv2) == 7 );    
}
