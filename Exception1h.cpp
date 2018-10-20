#include"FileException.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

// �t�@�C�����J��
// �J���Ȃ����FileException��O�𓊂���
void Open(ifstream& file, const char* filename) {

	file.open(filename);
	if (!file.is_open()) {
		throw FileException("�t�@�C�����J���܂���ł���");
	}
}

// �t�@�C������1�s���擾����
// �擾�ł��Ȃ����FileException��O�𓊂���
void GetLine(ifstream& file, string& line) {

	getline(file, line);
	if (file.fail()) {
		FileException e("�t�@�C������ǂݍ��߂܂���ł���");
		throw e;
	}
}

int main() {

	try {

		ifstream file;
		Open(file, "test.txt");

		string line;
		GetLine(file, line);
		cout << line << endl;
	}
	catch (const FileException& e) {

		cerr << e.What() << endl;
		return EXIT_FAILURE;
	}

}