#include "IntArray.h"
#include <iostream>
using namespace std;

int main() {
	IntArray a(5);
	IntArray b(5);

	// a�ɒl����͂��Ă���
	for (int i = 0, size = a.Size(); i < size; ++i) {
		int n;
		cin >> n;
		a.Set(i,n);
	}

	// �����b�ɃR�s�[����2�{����
	b = a;

	for (int i = 0, size = b.Size(); i < size; ++i) {
		b.Set(i, b.Get(i) * 2);
	}

	// a����b�łǂ��l���ω����������o�͂���
	for (int i = 0, size = a.Size(); i < size; ++i) {
	
		cout << a.Get(i) << "->" << b.Get(i) << endl;

	}

}