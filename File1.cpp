#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

int main() {

	fstream file;

	file.open("text.txt", ios::out);

	if (!file.is_open()) {
		return EXIT_FAILURE;
	}

	file << "文字を書き込む" << endl;
	file.close();

}