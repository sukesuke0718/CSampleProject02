#include<iostream>
#include<cstdio>
using namespace std;

// �����R�[�h��16�i���ŕ\��
void DumpCode(const char* str) {

	for (int i = 0; str[i] != '\0'; ++i) {

		printf("%02X ", (unsigned char)str[i]);
	}

	cout << endl;
}

int main() {

	DumpCode("\"\'\?\\");
	DumpCode("\a\b\t\n\v\f\r");

}