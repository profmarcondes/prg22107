#include <iostream>
#include <string>

using namespace std;

class Animal{
private:
	string name;
	string gender;
	unsigned int age;

public:
	Animal(string name, string gender){
		this->name = name;
		this->gender = gender;
		this->age = 0;
	}
	/*void setName(string name){
		if(name.length() != 0){
			this->name = name;
		} else {
			cout << "Name cannot be empty!" << endl;
		}
	}*/
	void setAge(unsigned int age){
		if(age > this->age){
			this->age = age;
		} else {
			cout << "Age less than actual age!" << endl;
		}
	}

	void showName(){
		cout << "Name: " << name << endl;
	}
};


class Cat: public Animal{
public:
	Cat(string name, string gender): Animal(name, gender) {}
	void meow(){
		cout << "Meow!" << endl;
	}
};

class Dog: public Animal{
public:
	Dog(string name, string gender): Animal(name, gender) {}
	void bark(){
		cout << "Bark!" << endl;
	}
};

class HelloWorld{
public:
	void print();
};

void HelloWorld::print() {
	cout << "Hello World!" << endl;
}


int example(){
	Cat tom("Tom","male");
	Cat nina("Nina","female");
	Dog scooby("Scooby","male");

	tom.showName();
	tom.meow();

	
	nina.showName();
	nina.meow();


	
	scooby.showName();
	scooby.bark();

}


int main() {
	HelloWorld obj;
	obj.print();


	example();



	return 0;
}