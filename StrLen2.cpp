#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	char* p;

	for (p = str; *p != '\0'; ++p) {

	}

	return p - str;
}

void ShowLength(char* str) {

	cout << "文字列「" << str << "」の長さは"
		<< StrLen(str) << "バイトです。" << endl;

}

int main() {

	char str1[] = "Hello";
	char str2[] = " ";

	ShowLength(str1);
	ShowLength(str2);

}