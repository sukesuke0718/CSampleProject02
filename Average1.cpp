#include <iostream>
using namespace std;

// ���͊֐�
// 0�ȏ�̒l�����͂��ꂽ��true���A
// ���̒l�����͂��ꂽ��false��Ԃ�
bool Input(double& n) {
	cin >> n;
	return n >= 0;
}

// ���͂��󂯎���ĕ��ϒl�����߁A���̒l���o�͂���֐�
// �v�f����0�̏ꍇ�͉����o�͂����Afalse��Ԃ�
bool Average() {

	int count;
	double n;
	double avr = 0;

	for (count = 0; Input(n); ++count) {
		avr += n;
	}

	if (count == 0) {
		return false;
	}

	avr /= count;

	cout << "���ϒl��" << avr << "�ł��B" << endl;
	return true;

}

int main() {

	while (Average()) {
		//�������Ȃ�
	}

}
