#include<iostream>
using namespace std;

int main() {

	char a;
	// �|�C���^
	char* p;

	// �ϐ�a�̃A�h���X���Z�b�g
	p = &a;

	cout << "p = " << (size_t)p << endl
		<< "&a = " << (size_t)&a << endl;

}