#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	char* p;

	for (p = str; *p != '\0'; ++p) {

	}

	return p - str;
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