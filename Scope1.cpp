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

	// ::�����邱�ƂŃO���[�o���ϐ���D��I�Ɏg�����Ƃ��o����
	cout << ::a << " : " << (size_t)&::a << endl;

}
