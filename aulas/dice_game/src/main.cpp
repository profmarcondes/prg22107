#include <iostream>
#include <cstdlib>
#include <ctime>


class Die {
private:
	int _faceValue;

public:
	Die() {
		srand(time(NULL));
		roll();
	}
	int getFaceValue(){
		return _faceValue;
	}
	void roll() {
		_faceValue = rand() % 6 + 1;
	}

};

class DiceGame {
private:
	Die _die1;
	Die _die2;
public:
	bool play();
};

bool DiceGame::play() {
	_die1.roll();
	_die2.roll();

	int sum = _die1.getFaceValue() + _die2.getFaceValue();

	//std::cout << "DiceGame::play() -> Die 1: " << _die1.getFaceValue() << std::endl;
	//std::cout << "DiceGame::play() -> Die 2: " << _die2.getFaceValue() << std::endl;
	//std::cout << "DiceGame::play() -> Sum: " << sum << std::endl;

	if (sum == 7) {
		//std::cout << "DiceGame::play() -> You win!" << std::endl;
		return true;
	} else {
		//std::cout << "DiceGame::play() -> You lose!" << std::endl;
		return false;
	}
}



int main() {

	std::cout << "DiceGame" << std::endl;

	//Die dado;
	//std::cout << "dado = " << dado.getFaceValue() << std::endl;
	DiceGame game;
	
	int times = 100000;
	int wins = 0;
	for (int i = 0; i < times; i++) {
		if(game.play()) {
			//std::cout << "You won!" << std::endl;
			wins++;
		} else {
			//std::cout << "You lost!" << std::endl;
		}
	}

	std::cout << "You won " << wins << " times out of " << times << std::endl;
	std::cout << "You lost " << times - wins << " times out of " << times << std::endl;
	std::cout << "You won " << (float)wins / times * 100 << "% of the time" << std::endl;
	std::cout << "You lost " << (float)(times - wins) / times * 100 << "% of the time" << std::endl;
	
		
	

	return 0;
}