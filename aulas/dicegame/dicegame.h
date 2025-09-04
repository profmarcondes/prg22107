#ifndef DICEGAME_H
#define DICEGAME_H

#include "die.h"

class DiceGame {

public:
    DiceGame();
    ~DiceGame();
    bool play();

private:
    Die * _d1;
    Die * _d2;
};

#endif