#include<iostream>
using namespace std;

int main() {

	int a = 0;

	// �ϐ��ւ̑�������
	a += 2;
	cout << "a += 2             ->  a =" << a << endl;

	// �C���N�������g
	++a;
	cout << "++a                ->  a =" << a << endl;

	// ���G�Ȍv�Z
	a = a * 5 + 2;
	cout << "a = a * 5 + 2      ->  a =" << a << endl;

}