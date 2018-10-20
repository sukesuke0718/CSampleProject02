#include<iostream>
#include<exception>
using namespace std;

class Hoge{

public:
	Hoge();
	virtual ~Hoge();

};

Hoge::Hoge() {
	cout << "Hoge" << endl;
}

Hoge::~Hoge() {
	cout << "~Hoge" << endl;
}

class Base {

public:
	Base();
	virtual ~Base();
};

Base::Base() {
	cout << "Base" << endl;
}

Base::~Base() {
	cout << "~Base" << endl;
}

class Derived :
	public Base
{
public:
	Derived();
	virtual ~Derived();

private:
	Hoge m_hoge;

};

Derived::Derived() {
	throw exception();
}

Derived::~Derived() {
	cout << "Derved" << endl;
}

int main(){

	try {
	Derived d;
	}
	catch(const exception& e){
	}

}