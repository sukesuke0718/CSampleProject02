#include<iostream>
using namespace std;

// ��Βl�����߂�
int Abs(int a) {

	if (a < 0) {
		return -a;
	}else {
		return a;
	}

}

double Abs(double a) {

	if (a < 0) {
		return -a;
	}else {

	}

}

// ����
int Input(int& i, double& d) {

	cout << "�����l����͂��Ă���������" << flush;
	cin >> i;

	if (i == 0) {
		return 0;
	}

	cout << "�����l����͂��Ă���������" << flush;
	cin >> d;

	if (d == 0) {
		return 0;
	}

	// �ǂ��炩��0�����͂���Ă��Ȃ��ꍇ
	return 1;
}

// ��Βl�̕\��
void ShowAbs(int i, double d) {

	cout << i << "�̐�Βl��" << Abs(i) << "�ŁA" << endl
		<< d << "�̐�Βl��" << Abs(d) << "�ł��B" << endl;

}

int main() {

	int i;
	double d;

	// �߂�l��0����Ȃ����胋�[�v���s��
	while (Input(i, d) != 0) {
		ShowAbs(i,d);
	}
}