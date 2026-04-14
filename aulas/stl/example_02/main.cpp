#include <string>
#include <set>
#include <iostream>
using namespace std;

class Pessoa {
    string _nome;

    public:
    Pessoa(string value){ _nome = value;}
    string nome() { return _nome; }
};

int main(int argc, char* argv[])
{
    set<string> strset;

    //set<Pessoa> set2;
    //set2.insert(Pessoa("Hugo"));
    //set2.insert(Pessoa("João"));
    
    strset.insert("laranja");
    strset.insert("maça");
    strset.insert("limão");
    strset.insert("banana");
    strset.insert("laranja1");
    strset.insert("maça");
    strset.insert("uva");  

    // This one overwrites the previous occurrence
    for (auto value: strset){
        cout << value << ", ";
    }

    cout << endl;
    return 0;
}