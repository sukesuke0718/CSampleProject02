#include<iostream>
using namespace std;

// �������ǂ������肵�Atrue/false��Ԃ�
bool IsDigit(char ch) {
	return '0' <= ch && ch << '9';
}

int main() {

	while (true) {
		char ch;

		cout << "������������͂��Ă���������" << flush;
		cin >> ch;

		if (ch == 'Q' || ch == 'q') {
			break;
		}

		if (IsDigit(ch)) {
			cout << "�����ł��B" << endl;
		}else {
			cout << "�����ł͂���܂���B" << endl;
		}

	}

	cout << "�I�����܂��B" << endl;
}
