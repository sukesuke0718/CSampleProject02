#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;

// ファイルを開く
void OpenFile(ifstream& file, const char* filename) {

	file.open(filename);
	if (!file.is_open()) {
		throw 1;
	}
}

// ファイルから1行を取得する
void GetLine(ifstream& file, string& line) {

	getline(file, line);
	if (file.fail()) {
		throw "ファイルから読み込めませんでした";
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
		cerr << "ファイルを開けませんでした" << endl;
		return EXIT_FAILURE;
	}



}