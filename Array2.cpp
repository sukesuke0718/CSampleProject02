#include<iostream>
using namespace std;

// �z��̐擪�̃A�h���X��n�����Ƃ�
// �z��������Ƃ��Ă���
// �z��n���悤�ɏ����Ă��Ă��A�h���X��n���Ă���
// ���Ƃɒ���
void Init(int array[]) {

	for (int i = 0; i < 5; i++) {

		array[i] = i * 5;

	}

}

void Show(int array[]) {

	for (int i = 0; i < 5; i++) {

		cout << array[i] << ' ';

	}

	cout << endl;
}

int main() {

	int n[5];

	Init(n);
	Show(n);

}