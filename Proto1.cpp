#include<iostream>
using namespace std;

int f(int x, int y);

int main() {

	cout << f(1, 2) << endl;
	cout << f(184, 144) << endl;

}

int f(int x, int y) {

	return 2 * x + y;

}
