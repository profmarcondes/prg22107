#include <vector>
#include <iostream>  
using namespace std;

const char* szHW = "Hello World";


class Pessoa {


};

int main(int argc, char* argv[])
{
    vector<char> vec;

    vector<Pessoa> usuarios;
    usuarios.push_back(Pessoa());

    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(15);

    auto i = 19;


    const char* cptr = szHW;

    while (*cptr != '\0') {  
        vec.push_back(*cptr);  
        cptr++;  
    }

    for (vector<char>::iterator vi=vec.begin(); vi!=vec.end(); vi++) {  
        cout << *vi;  
    }

    cout << endl;

    for (auto vi=numbers.begin(); vi!=numbers.end(); vi++) {  
        cout << *vi << " , ";  
    }
    cout << endl;

    for(auto value : numbers){
        cout << value << ", ";
    }
    cout << endl;

    for(int i = 0; i < numbers.size(); i++){
        cout << numbers[i] << "," ;
    }
    cout << endl;
    
    return 0;
}