#include<iostream>
using namespace std;

int main() {

	int a, b;

	cout << "2つ値を入力してください＞" << flush;

	cin >> a >> b;

	// 条件を考慮してどちらの値を返すか分岐できる演算子
	cout << "大きい方の数字は" << (a > b ? a : b) << "です。" << endl;

}
