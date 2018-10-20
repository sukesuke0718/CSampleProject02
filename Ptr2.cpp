#include<iostream>
using namespace std;

int main() {

	int a;
	int* p = &a;

	a = 0;

	cout << a << endl
		<< *p << endl;

	*p = 5;

	cout << a << endl
		<< *p << endl;

}