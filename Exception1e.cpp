#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

int main() {

	try {

		ifstream file;

		file.open("test.txt");
		if (!file.is_open()) {
			throw "�t�@�C�����J���܂���ł���";
		}

		string line;
		getline(file, line);
		if (file.fail()) {
			throw "�t�@�C������ǂ݂��߂܂���ł���";
		}

		cout << line << endl;

	}
	catch(const char* error) {

		cerr << error << endl;
		return EXIT_FAILURE;
	}

}