#include<iostream>
using namespace std;

int main() {

	// ���I�ɃA�h���X���m�ۂ��Ă���
	// ���s���Ƀ��������m�ۂ����
	int* p = new int;

	*p = 0;
	cout << *p << endl;

	// ���I�������͕K���J�����K�v�ƂȂ�
	delete p;
}