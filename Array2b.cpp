#include<iostream>
using namespace std;

// 定数を宣言
// 値に名前がついているので意味が伝わりやすくなる
const int ARRAY_SIZE = 5;

void Init(int array[]) {

	for (int i = 0; i < ARRAY_SIZE; ++i) {

		array[i] = i * 5;

	}
}

// 引数の配列を書き換えることがないように
// constをつけている
void Show(const int array[]) {

	for (int i = 0; i < ARRAY_SIZE; ++i) {

		cout << array[i] << ",";

	}
	cout << endl;

}

int main() {

	// 配列の要素数を定数で指定しているので
	// 変更したい場合は、定数一か所の変更で済む
	int n[ARRAY_SIZE];

	Init(n);
	Show(n);

}
