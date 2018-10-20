#include<iostream>
using namespace std;

size_t StrLen(char* str) {

	int i;

	// str[i]と同じ意味になる
	for (i = 0; *(str + i) != '\0'; ++i) {

	}

	return i;
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