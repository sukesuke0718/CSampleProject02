#include<iostream>
using namespace std;

//��������a�ɕϊ�
//�ςȒl���n���ꂽ�ꍇ�A0��Ԃ�
int WesternToshouwa(int western) {

	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}else {
		return 0;
	}

}

void Shouwa() {

	int western;

	cout << "�������͂��Ă������� > " << flush;
	cin >> western;

	int  shouwa = WesternToshouwa(western);

	if (shouwa == 0) {
		cout << "���̔N�͏��a�ł͂���܂���" << endl;
	}else {
		cout << "���̔N�͏��a" << shouwa << "�N�ł�" << endl;
	}

}

int main() {

	Shouwa();
	Shouwa();

}