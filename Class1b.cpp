#include<iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	// �����o�֐�
	void Show();
};

// Student�̊֐��ł��邱�Ƃ𖾂炩�ɂ���K�v����
void Student::Show() {

	cout << "���O�F" << name << endl
		<< "����F" << scoreJapanese << "�_"
		<< "�A���w�F" << scoreMath << "�_"
		<< "�A�p��F" << scoreEnglish << "�_" << endl;
}

int main() {

	Student student[] = {
		{ "�Ԉ�|",73,60,75 },
	{ "���c��",95,86,90 },
	{ "�{�c�_��",96,86,97 }
	};

	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		// �����o�֐����Ăяo��
		student[i].Show();
	}

}