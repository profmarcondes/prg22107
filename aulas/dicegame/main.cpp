#include <iostream>
#include "dicegame.h"

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello dicegame !" << endl;

	DiceGame game;

	int times = 100;
	int wins = 0;

	for(int i = 0; i < times; i++){
		cout << "Play(" << i << ") -> ";
		if(game.play()) {
			wins++;
			cout << "You won!" << endl;
		} else {
			cout << "You lose!" << endl;
		}
	}

	cout << "Wins = " << wins << endl;
	cout << "Win Percentage = " << wins/(double)times << endl;


	return 0;
}
