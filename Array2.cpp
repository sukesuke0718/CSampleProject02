#include<iostream>
using namespace std;

// 配列の先頭のアドレスを渡すことで
// 配列を引数としている
// 配列渡すように書いていてもアドレスを渡している
// ことに注意
void Init(int array[]) {

	for (int i = 0; i < 5; i++) {

		array[i] = i * 5;

	}

}

void Show(int array[]) {

	for (int i = 0; i < 5; i++) {

		cout << array[i] << ' ';

	}

	cout << endl;
}

int main() {

	int n[5];

	Init(n);
	Show(n);

}