#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	int i;

	// str[i]�Ɠ����Ӗ��ɂȂ�
	for (i = 0; *(str + i) != '\0'; ++i) {

	}

	return i;
}

void ShowLength(char* str) {

	cout << "������u" << str << "�v�̒�����"
		<< StrLen(str) << "�o�C�g�ł��B" << endl;

}

int main() {

	char str1[] = "Hello";
	char str2[] = " ";

	ShowLength(str1);
	ShowLength(str2);

}