#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int Error(const char* error) {

	cerr << error << endl;
	return EXIT_FAILURE;

}


int  main() {

	ifstream file;

	file.open("test.txt");

	if (!file.is_open()) {
		return Error("�t�@�C�����J���܂���ł���");
	}

}