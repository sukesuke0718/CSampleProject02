#include<iostream>
using namespace std;

// ���̃t�@�C�����ł̂ݎg�p�\
static int a = 2;

// ���̃t�@�C���ł̂ݎg�p�\
static void Func1() {
	cout << "a(1) = " << a << endl;
}

// ���̃t�@�C���ł��v���g�^�C�v�錾���s�����Ƃ�
// �g�p�\�ƂȂ�
void Func2() {
	Func1();
}