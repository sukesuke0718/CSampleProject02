#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

// �t�@�C�����J��
void OpenFile(ifstream& file, const char* filename) {

	file.open(filename);
	if (!file.is_open()) {
		throw 1;
	}
}

// �t�@�C������1�s���擾����
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
	catch (int error) {
		cerr << "�t�@�C�����J���܂���ł���" << endl;
		return EXIT_FAILURE;
	}



}