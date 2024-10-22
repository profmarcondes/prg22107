#include <iostream>
#include "dicegame.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    DiceGame game;

    int times = 1000;
    int wins = 0;

    for(int i = 0; i < times; i++){
        cout << "[" << i << "] ";
        if(game.play()){
            cout << "won !";
            wins++;
        } else {
            cout << "lose !";
        }
        cout << endl;
    }

    cout << "Game statistics" << endl;
    cout << "Plays " << times << endl;
    cout << "Wins " << wins << "(" << (wins/(double)times)*100 << "%)" << endl;

    return 0;
}
