#include<iostream>
using namespace std;

const int MAX_NAME = 16;

// �\���̂��쐬
struct Student {
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

// �\���̂̓f�[�^�ʂ������Ȃ�̂�
// �Q�Ɠn���ɂ��Ă����Ƃ悢
void Show(const Student& student) {

	cout << "���O�F" << student.name << endl
		<< "����F" << student.scoreJapanese << "�_"
		<< "�A���w�F" << student.scoreMath << "�_"
		<< "�A�p��F" << student.scoreEnglish << "�_" << endl;
}

int main() {

	// �z��Ƃ��Đ錾
	Student student[] = {
		{"�Ԉ�E", 73, 56, 60},
		{ "��؏r", 45, 94, 65 },
		{ "��K�V��", 96, 78, 79 }
	};

	// �z��̃T�C�Y���v�Z
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {

		Show(student[i]);
	}

}