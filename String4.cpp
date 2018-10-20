#include <iostream>
#include <string>
using namespace std;

int main() {

	while (true) {

		string line;
		
		cout << "何か文字を入力してください > " << flush;

		// 入力された一行を代入する
		getline(cin, line);

		if (line == "quit") {
			break;
		}

		// 指定した文字列を探す関数
		string::size_type pos = line.rfind("。");

		if (pos == string::npos) {
			line += "アルネ。";
		}
		else {

			// 指定した箇所に文字列を挿入する関数
			line.insert(pos, "アルネ");
		}

		cout << line << endl;

	}


}