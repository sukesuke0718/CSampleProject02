#include<iostream>
using namespace std;

int main() {

	// 動的にアドレスを確保している
	// 実行中にメモリが確保される
	int* p = new int;

	*p = 0;
	cout << *p << endl;

	// 動的メモリは必ず開放が必要となる
	delete p;
}