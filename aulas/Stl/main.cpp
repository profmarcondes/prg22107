#include <vector>
#include <set>
#include <map>
#include <iostream>
using namespace std;

char* szHW = "Hello World";

int main(int argc, char* argv[])
{
    vector<char> vec;
    vector<char>::iterator vi;
    char* cptr = szHW;

    while (*cptr != '\0') {
        vec.push_back(*cptr);
        cptr++;
    }

    for (vi=vec.begin(); vi!=vec.end(); vi++) {
        cout << *vi;
    }
    cout << endl;

    cout << "Set example" << endl << endl;

    set <string> strset;
    set <string>::iterator si;
    strset.insert("laranja");
    strset.insert("maça");
    strset.insert("limão");
    strset.insert("banana");
    strset.insert("uva");
    strset.insert("uva");
    // This one overwrites the previous occurrence
    for (si=strset.begin(); si!=strset.end(); si++) {
        cout << *si << " ";
    }
    cout << endl;

    cout << "Map example" << endl << endl;

    map<int, string> Estudante;
    map<int,string>::iterator ii;
    Estudante[5234] = "Joao da Silva";
    Estudante[3374] = "Carlos Pereira";
    Estudante[9923] = "Bruna da Silva";
    Estudante[7582] = "Jonas Macedo";
    Estudante[5328] = "Vitor Machado";

    cout << "Estudante[3374]=" << Estudante[3374] << endl << endl;
    cout << "Map size: " << Estudante.size() << endl;

    for(ii=Estudante.begin(); ii!=Estudante.end(); ++ii) {
        cout << (*ii).first << ": " << (*ii).second << endl;
    }


    return 0;
}
