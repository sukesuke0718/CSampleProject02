#include<iostream>
using namespace std;

// �Q��
// �����Ƃ��ēn���ꂽ�ϐ��̒l�𒼐ڑ��삷�邱�Ƃ��o����
void WesternToShouwa(int& x) {

	if (1926 <= x && x <= 1989) {
		x -= 1925;
	}
	else {
		x = 0;
	}

}

void Shouwa() {
	int year;

	cout << "�������͂��Ă���������" << flush;
	cin >> year;

	WesternToShouwa(year);

	if (year != 0) {
		cout << "���̔N�͏��a" << year << "�N�ł�"<< endl;
	}
	else {
		cout << "���̔N�͏��a�ł͂���܂���" << endl;
	}
}

int main() {

	Shouwa();
	Shouwa();

}
