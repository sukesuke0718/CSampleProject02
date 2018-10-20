#include<iostream>
using namespace std;

int a = 1;

int main() {

	cout << a << " : " << (size_t)&a << endl;

	int a = 2;
	cout << a << " : " << (size_t)&a << endl;

	{
		int a = 3;
		cout << a << " : " << (size_t)&a << endl;

	}

	// ::をつけることでグローバル変数を優先的に使うことが出来る
	cout << ::a << " : " << (size_t)&::a << endl;

}
