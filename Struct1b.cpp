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

//�Q�Ɛ��萔�ɂ��Ă���
// �|�C���^�Ƃ��ēn��
void Show(const Student* pointer) {

	cout << "���O�F" << pointer->name << endl
		<< "����F" << pointer->scoreJapanese << "�_"
		<< "�A���w�F" << pointer->scoreMath << "�_"
		<< "�A�p��F" << pointer->scoreEnglish << "�_" << endl;
}

int main() {

	// �z��Ƃ��Đ錾
	Student student[] = {
		{ "�Ԉ�E", 73, 56, 60 },
	{ "��؏r", 45, 94, 65 },
	{ "��K�V��", 96, 78, 79 }
	};

	// �z��̃T�C�Y���v�Z
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {

		//�A�h���X���擾���邽�߂�&�����Ă���
		Show(&student[i]);
	}

}