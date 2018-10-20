#include<iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

void Show(const Student& student) {

	cout << "���O�F" << student.name << endl
		<< "����F" << student.scoreJapanese << "�_" << endl
		<< "���w�F" << student.scoreMath << "�_" << endl
		<< "�p��F" << student.scoreEnglish << "�_" << endl;
}

int main() {

	Student student[] = {
		{"�Ԉ�|",73,60,75},
		{"���c��",95,86,90},
		{"�{�c�_��",96,86,97}
	};

	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		Show(student[i]);
	}

}