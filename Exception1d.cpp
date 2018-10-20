#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main() {

	const char* error = NULL;
	ifstream file;
	string line;

	file.open("test.txt");
	if (!file.is_open()) {
		error = "�t�@�C�����J���܂���ł���";
		goto ON_ERROR;
	}

	getline(file, line);
	if (file.fail()) {
		error = "�t�@�C������ǂݍ��߂܂���ł���";
		goto ON_ERROR;
	}

	return EXIT_SUCCESS;

ON_ERROR:
	cerr << error << endl;
	return EXIT_FAILURE;
}