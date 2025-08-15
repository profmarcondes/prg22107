#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello World!" << endl;

	vector<int> numbers;

	/*
	string tmp;
	cout << "Entre com a quantidade de números: ";
	int qnt;
	cin >> qnt;
	if(cin.fail()){
		cout << "Entrada inválida. Por favor, insira um número inteiro." << endl;
		return 1; // Retorna um código de erro
	}
	for(int i = 0; i < qnt; i++) {
		int number;
		cout << "Entre com o número " << i + 1 << ": ";
		cin >> number;
		if(cin.fail()){
			cin.clear();
			cin >> tmp;
			cout << "Entrada inválida (" << tmp << "). Por favor, insira um número inteiro." << endl;
			i--;//return 1; // Retorna um código de erro
		} else {
			numbers.push_back(number);
		}
	}
	*/


	string line;
	int number;
	cout << "Entre com a lista de valores para o vetor (int): ";
	getline(cin, line);
	stringstream ss(line);
	do {
		ss >> number;
		if (ss.fail()) {
			ss.clear();
			ss >> line;
			cout << "Ignorando entrada inválida (" << line << ")." << endl;
		} else {
			numbers.push_back(number);
		}
	} while (!ss.eof());

	cout << "O vetor numbers contém: ";
	for (vector<int>::iterator it =	numbers.begin(); it != numbers.end(); it++){
		cout << *it << " ";
	}
	cout << endl;

	cout << "O menor número do vetor é: " << *min_element(numbers.begin(), numbers.end()) << endl;
	cout << "O maior número do vetor é: " << *max_element(numbers.begin(), numbers.end()) << endl;
	cout << "A soma dos números do vetor é: " << accumulate(numbers.begin(), numbers.end(), 0) << endl;

	sort(numbers.begin(), numbers.end());
	cout << "O vetor numbers ordenado é: ";
	for (auto number : numbers){
		cout << number << " ";
	}
	cout << endl;

	for (auto number : {3, 5, 15, 89}){
		cout << number << endl;
	}
	return 0;
}
