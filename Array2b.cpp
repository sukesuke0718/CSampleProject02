#include<iostream>
using namespace std;

// �萔��錾
// �l�ɖ��O�����Ă���̂ňӖ����`���₷���Ȃ�
const int ARRAY_SIZE = 5;

void Init(int array[]) {

	for (int i = 0; i < ARRAY_SIZE; ++i) {

		array[i] = i * 5;

	}
}

// �����̔z������������邱�Ƃ��Ȃ��悤��
// const�����Ă���
void Show(const int array[]) {

	for (int i = 0; i < ARRAY_SIZE; ++i) {

		cout << array[i] << ",";

	}
	cout << endl;

}

int main() {

	// �z��̗v�f����萔�Ŏw�肵�Ă���̂�
	// �ύX�������ꍇ�́A�萔�ꂩ���̕ύX�ōς�
	int n[ARRAY_SIZE];

	Init(n);
	Show(n);

}
