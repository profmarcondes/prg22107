#include <iostream>

#include "dicegame.h"

using namespace std;



int main (int argc, char* argv[]) {
	cout << "Hello dicegame !" << endl;

	DiceGame game;

	//Die obj;
	//cout << "Valor de face inicial é " << obj.getFaceValue() << endl;

	int times = 100000;
	float win = 0;
	for(int i = 0; i < times; i++){
		if(game.play()){
			cout << "Você venceu!" << endl;
			win += 1.0;
		} else {
			cout << "Você perdeu!" << endl;
		}
		//obj.roll();
		//cout << "Valor de face do dado é " << obj.getFaceValue() << endl;
	}

	cout << "Porcentagem de vitórias = " << ((double)win/times)*100 << " %" << endl;

	cout << "Goodbye dicegame !" << endl;
	return 0;
}
