#include<iostream>
using namespace std;

int StrCount(char* str, char ch) {

	int num = 0;

	for (int i = 0; str[i] != '\0'; ++i) {

		if (str[i] == ch) {
			++num;
		}

	}

	return num;
}

int main() {

	char path[] = "/home/robert/documents/const.txt";

	cout << "�t�@�C��" << path << "��" << StrCount(path, '/')
		<< "�d�̃t�H���_�̒��ɓ����Ă��܂��B" << endl;

}