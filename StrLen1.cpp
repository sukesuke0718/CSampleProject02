#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	size_t i;

	for (i = 0; str[i] != '\0'; ++i) {
		// �������Ȃ�
	}

	return i;

}

void ShowLength(char* str) {
	
	cout << "������u" << str << "�v�̒�����"
		<< StrLen(str) << "�o�C�g�ł��B" << endl;

}

int main() {

	// ���ڈ����Ƀ��e�����œ����ƃG���[�H
	char str1[] = "Hello";
	char str2[] = " ";

	ShowLength(str1);
	ShowLength(str2);

}