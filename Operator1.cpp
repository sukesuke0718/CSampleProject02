#include "IntArray.h"
#include <iostream>
using namespace std;

int main() {
	IntArray a(5);
	IntArray b(5);

	// aに値を入力していく
	for (int i = 0, size = a.Size(); i < size; ++i) {
		int n;
		cin >> n;
		a.Set(i,n);
	}

	// それをbにコピーして2倍する
	b = a;

	for (int i = 0, size = b.Size(); i < size; ++i) {
		b.Set(i, b.Get(i) * 2);
	}

	// aからbでどう値が変化したかを出力する
	for (int i = 0, size = a.Size(); i < size; ++i) {
	
		cout << a.Get(i) << "->" << b.Get(i) << endl;

	}

}