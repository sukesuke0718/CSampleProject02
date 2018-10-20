#include<iostream>
#include<algorithm>		// fill_n���g�p���邽�߂̃w�b�_
using namespace std;

//�A�h���X�����ɂȂ邱�Ƃ̃`�F�b�N

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {

	cout << "�A�h���X����Ɉ�肩�̃`�F�b�N" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

//�ÓI�ϐ�a�Ǝ����ϐ�b�̃A�h���X���o��
void CheckAddress_Sub() {

	static int a;
	int b;

	cout << "&a = " << (size_t)&a << endl
		 << "&b = " << (size_t)&b << endl;
}

// �ʂ̊֐�����Ăяo��
void CheckAddress_Sub2() {

	cout << "in Sub2" << endl;
	CheckAddress_Sub();

}

//��������1��݂̂̃`�F�b�N
void CheckInitOnce_Sub();

void CheckInitOnce() {

	cout << "����������񂵂�����Ȃ����Ƃ̃`�F�b�N" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

//++a ��++b�̉e����2�x�ڈȍ~�̌Ăяo���ɉe�����邩�`�F�b�N
void CheckInitOnce_Sub() {

	static int a = 3;
	int b = 3;

	cout << "a = " << a << endl
		 << "b = " << b << endl;

	++a;
	++b;

}

// �������̃`�F�b�N
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit() {

	cout << "0�ŏ���������邩�̃`�F�b�N " << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

//�ÓI�ϐ������ŏ���������Ă��邩�̃`�F�b�N
void CheckZeroInit_Sub() {

	static int a, b, c, d;
	cout << a << "," << b << "," << c << "," << d << endl;
}

//�����ϐ������ŏ���������Ă��邩�̃`�F�b�N
void CheckZeroInit_Sub2() {

	int a = 1, b = 1, c = 1, d = 1;
	cout << a << "," << b << "," << c << "," << d << endl;
}

//�l���ۏ؂���Ă��邩�`�F�b�N
void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {

	cout << endl << "�l���ۏ؂���Ă��邩�̃`�F�b�N" << endl;

	int *pa, *pb;

	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();

	cout << "*pa = " << *pa << endl
		 << "*pb = " << *pb << endl;
}

//�ÓI�ϐ�a�Ǝ����ϐ�b�̃A�h���X��������ʂ��ĕԂ�
// int*& ��int*�ւ̎Q��
void CheckInvariant_Sub(int*& pa, int*& pb) {

	static int a = 9;
	int b = 9;
	pa = &a;
	pb = &b;
}

//�傫�ȕϐ�������āA��������ׂ�0�Ŗ��߂�
void CheckInvariant_Sub2() {
	int dummy[100];
	fill_n(dummy , 100 ,0);
}

int main() {

	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();

}