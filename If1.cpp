#include<iostream>
using namespace std;

void BirthMonth() {

	int month;

	cout << "�������܂�ł����H > " << flush;

	/* ��ʓ��͂����l���󂯎��ϐ��ɃZ�b�g���� */
	cin >> month;
	
	if (1 <= month && month <= 12) {
		
		cout << month << "���Ȃ�ł���" << endl;

	}else {
		
		cout << month << "���͂���܂���" << endl;

	}
}

int main() {

	BirthMonth();
	BirthMonth();

}
