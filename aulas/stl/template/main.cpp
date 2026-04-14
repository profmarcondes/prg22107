#include <iostream>

using namespace std;

template<unsigned int N>
struct Fatorial {
	enum { value = N * Fatorial<N-1>::value };
};

template<>
struct Fatorial<0> {
	enum { value = 1 };
};

template<typename T, int COUNT = 10>
class MyClass {
	int array[COUNT];
	T _attribute;

	public:
	void setAttribute(T param) { _attribute = param; }
	T getAttribute() { return _attribute; }
	void count() { cout << COUNT << endl; }
	void doSomething() { _attribute.calculate(); }
};


class Dummy {

public:
	void  calculate() { cout << "Calculating" << endl; }

};


int main (int argc, char* argv[]) {
	cout << "Hello template !" << endl;

	cout << "Fatorial 10 = " << Fatorial<10>::value << endl;

	MyClass<int> temp;
	temp.setAttribute(10);
	//temp.doSomething();

	MyClass<double> obj;
	obj.setAttribute(5.8);

	MyClass<double, 5> hugo;


	MyClass<int> obj2;
	obj2.setAttribute(5.9);


	cout << "Objeto2 = " << obj2.getAttribute() << endl;
	MyClass<string> obj3;
	
	//obj3.setAttribute(10);
	//obj3.doSomething();


	cout << "obj value = " << obj.getAttribute() << endl;

	MyClass<Dummy,5> obj4;
	obj4.doSomething();
	obj4.count();

	return 0;
}
