#include <iostream>
#include <string>
using namespace std;

int main() {

	string hello = "Hello!";

	cout << hello << endl;

	hello = "Hello";

	hello += ", world!";

	cout << "�u" << hello << "�v�𕶎��R�[�h�ɕς����" << endl;

	for (int i = 0, size = hello.size(); i < size; ++i) {

		cout << (int)(unsigned char)hello[i] << ",";

	}

	cout << endl;

}