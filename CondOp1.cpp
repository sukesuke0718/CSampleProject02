#include<iostream>
using namespace std;

int main() {

	int a, b;

	cout << "2�l����͂��Ă���������" << flush;

	cin >> a >> b;

	// �������l�����Ăǂ���̒l��Ԃ�������ł��鉉�Z�q
	cout << "�傫�����̐�����" << (a > b ? a : b) << "�ł��B" << endl;

}
