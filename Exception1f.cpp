#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

// �t�@�C�����J��
// �J���Ȃ����const char* ��O�𓊂���
void OpenFile(ifstream& file, const char* filename) {

	file.open(filename);
	if (!file.is_open()) {
		throw "�t�@�C�����J���܂���ł���";
	}
}

// �t�@�C�������s�擾����
// �J���Ȃ����const char* ��O�𓊂���
void GetLine(ifstream& file, string& line) {

	getline(file, line);
	if (file.fail()) {
		throw "�t�@�C������ǂݍ��߂܂���ł���";
	}

}

int main() {

	try {
		ifstream file;
		OpenFile(file, "test.txt");

		string line;
		GetLine(file, line);
		cout << line << endl;

	}
	catch (const char* error) {
		cerr << error << endl;
		return EXIT_FAILURE;
	}

}