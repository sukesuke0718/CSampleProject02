#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const char SRC_NAME[] = "hello.txt";
const char DST_NAME[] = "hello2.txt";

const int BUF_SIZE = 1024;

int main() {

	fstream src;		// コピー元ファイル
	fstream dst;		// コピー先ファイル

	src.open(SRC_NAME, ios::in | ios::binary);
	
	if (!src.is_open()) {
		return EXIT_FAILURE;
	}

	dst.open(DST_NAME, ios::out | ios::binary);

	if (!dst.is_open()) {
		src.close();
		return EXIT_FAILURE;
	}

	// フラグ
	bool error = false;

	do {

		char buf[BUF_SIZE];

		src.read(buf, sizeof buf);

		// 読み込みの場合はファイルの最後でもfailが正になるので除外する
		if (src.fail() && !src.eof()) {
			error = true;
			break;
		}

		dst.write(buf, src.gcount());
		if (dst.fail()) {
			error = true;
			break;
		}

	} while (!src.eof());

	dst.close();
	src.close();

	// エラーが発生した際、ファイルを削除してメッセージを表示する
	if (error) {

		cout << "ファイル操作でエラーが発生しました！" << endl;

		// ファイルを削除する
		remove(DST_NAME);
		return EXIT_FAILURE;

	}

}