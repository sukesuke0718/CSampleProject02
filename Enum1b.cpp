#include<iostream>
using namespace std;

enum CompareResult {
	CR_LESS_THAN,
	CR_EQUAL_TO,
	CR_GREATER_THEN
};

CompareResult Compare(int a, int b) {
	return
		a < b ? CR_LESS_THAN :
		a > b ? CR_GREATER_THEN :
		CR_EQUAL_TO;
}

bool Compare() {

	static const char*  const MESSAGE[]{
		"前者は後者より小さいです",
		"両者は等しいです",
		"前者は後者より大きいです"

	};


	int a, b;

	cout << "数字を二つ入力してください＞" << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	cout << MESSAGE[Compare(a, b)] << endl;
	return true;

}

int main() {


	while (Compare()); {
		// 何もしない
	}

}