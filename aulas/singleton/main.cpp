#include <iostream>
#include <string>

using namespace std;


class TheRing {
	private:
		TheRing() {
			_name = "precious";
		}

	public:
		void sayIt(){
			cout << "(" << this << ") My " << _name << "!!!!" << endl;
		}
		static TheRing * getInstance(unsigned int unit) {
			if(unit >= 4)
				return nullptr;
			if(_instance[unit] == nullptr)
				_instance[unit] = new TheRing();
			return _instance[unit];
		}

	private:
		string _name;
		static TheRing* _instance[4];

};

TheRing * TheRing::_instance[] = {nullptr,nullptr,nullptr,nullptr};

int main (int argc, char* argv[]) {
	cout << "Hello singleton !" << endl;

	TheRing * obj = TheRing::getInstance(0);

	obj->sayIt();

	(TheRing::getInstance(1))->sayIt();

	return 0;
}
