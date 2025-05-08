#pragma once

#include <iostream>
#include <string>

using namespace std;

class Animal{
    private:
        string _name;
        string _gender;
        unsigned int _age;
        //Date _birthday;

    public:
        Animal(string name, string gender);
        ~Animal();

        void name(string name);

        string name(){ return _name; }
    
        void age(unsigned int age){
            if(age > _age){
                _age = age;
            } else {
                cout << "Age less than actual age!" << endl;
            }
        }
        unsigned int age(){
            return _age;
        }
    
        void showName(){
            cout << "Name: " << this->_name << endl;
        }
    
        void info(){
            cout << endl << "Name: " << _name << endl;
            cout << "Gender: " << _gender << endl;
            cout << "Age: " << _age << endl << endl;
        }
    };