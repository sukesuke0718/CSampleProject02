#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	fstream file;

	file.open("binary.txt", ios::out | ios::binary);

	if (!file.is_open()) {
		return EXIT_FAILURE;
	}

	int n = 0x41424344;

	// �A�h���X�A�o�C�g���������ɂ���
	file.write((const char*)&n,sizeof n);

	file.close();

}