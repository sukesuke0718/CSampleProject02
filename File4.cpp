#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const int WIDTH = 16;

int main() {

	fstream file;

	file.open("hello.txt", ios::in | ios::binary);

	if (!file.is_open()) {
		return EXIT_FAILURE;
	}

	do {
		unsigned char buf[WIDTH];

		// WIDTHコずつデータを読み込む
		file.read((char*)buf, sizeof buf);

		// 取得したバイト数だけループを行う	
		for (int i = 0, size = file.gcount(); i < size; ++i) {
			printf("%02X ", buf[i]);
		}
		cout << endl;

		// ファイルの最後に来たらループを終了
	} while (!file.eof());

	file.close();

}