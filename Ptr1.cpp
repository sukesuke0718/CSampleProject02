#include<iostream>
using namespace std;

int main() {

	char a;
	// ポインタ
	char* p;

	// 変数aのアドレスをセット
	p = &a;

	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t)&a << endl;

}