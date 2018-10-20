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

	file << "•¶Žš‚ð‘‚«ž‚Þ" << endl;
	file.close();

}