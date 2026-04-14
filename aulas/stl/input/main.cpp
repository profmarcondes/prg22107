#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main (int argc, char* argv[]) {
	cout << "Hello input !" << endl;

	//vector<int> numbers;

	string fname, lname;
	
	cout << "Digite alguma coisa: ";
	cin >> fname >> lname;
	cout << "Você digitou " << fname << " " << lname << endl;

	/*
	cout << "Quantos numeros deseja inserir? ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
			int num;
			cout << "Digite o numero " << i + 1 << ": ";
			cin >> num;
			cout << "Voce digitou " << num << endl;
	}*/

	/*
        cout << "Entre com a lista de numeros que deseja inserir: ";
        string line;
        getline(cin, line);
        stringstream ss(line);
        int value;
        do {
                ss >> value;
                if (!ss.fail()) {
                        numbers.push_back(value);
                } else {
                        ss.clear();
                        ss >> line;
                        cout << "invalid value -> " << line << endl;
                }
        } while(!ss.eof());

	cout << "Numeros inseridos: " << numbers.size() << endl;
	for(auto value: numbers){
		cout << value << ", ";
	}
	cout << endl;
	*/
	return 0;
}
