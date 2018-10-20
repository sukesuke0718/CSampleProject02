#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

const char* Run() {

	ifstream file;

	file.open("test.txt");
	if (!file.is_open()) {
		return "�t�@�C�����J���܂���ł���" ;
	}

	string line;
	getline(file, line);
	if (file.fail()) {
		return "�t�@�C������ǂݍ��߂܂���ł���" ;
	}

	return NULL;
}

int main() {

	const char* error = Run();

	if (error != NULL) {
		cerr << error << endl;
		return EXIT_FAILURE;
	}

}