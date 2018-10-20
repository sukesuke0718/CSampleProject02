#include<iostream>
using namespace std;

void Foo() {

	int a;
	char b[10];

	cout << (size_t)&a << endl
		<< (size_t)b << endl
		<< (size_t)Foo << endl;

}

int main() {

	Foo();

}