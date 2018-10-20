#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	size_t i;

	for (i = 0; str[i] != '\0'; ++i) {
		// 何もしない
	}

	return i;

}

void ShowLength(char* str) {
	
	cout << "文字列「" << str << "」の長さは"
		<< StrLen(str) << "バイトです。" << endl;

}

int main() {

	// 直接引数にリテラルで入れるとエラー？
	char str1[] = "Hello";
	char str2[] = " ";

	ShowLength(str1);
	ShowLength(str2);

}