#include"FileException.h"
#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

// ファイルを開く
// 開けなければOpenFileException例外を投げる
void Open(ifstream& file, const char* filename) {

	file.open(filename);
	if (!file.is_open()) {
		throw OpenFileException(filename);
	}
}

// ファイルから1行を取得する
// 取得できなければReadFileException例外を投げる
void GetLine(ifstream& file, string& line) {

	getline(file, line);
	if (file.fail()) {
		throw ReadFileEception();
	}
}

int main() {

	try {

		ifstream file;
		Open(file, "tes.txt");

		string line;
		GetLine(file, line);
		cout << line << endl;
	}
	catch (const FileException& e) {

		cerr << e.What() << endl;
		return EXIT_FAILURE;
	}

}