#include<iostream>
using namespace std;

int main() {

	char hello[] = "Hello!";

	hello[4] = '\0';

	cout << "�u" << hello << "�v�𕶎��R�[�h�ɕς����" << endl;

	for (int i = 0; hello[i] != '\0'; ++i) {

		cout << (int)(unsigned char)hello[i] << ",";

	}

}