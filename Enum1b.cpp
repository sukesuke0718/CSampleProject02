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
		"�O�҂͌�҂�菬�����ł�",
		"���҂͓������ł�",
		"�O�҂͌�҂��傫���ł�"

	};


	int a, b;

	cout << "���������͂��Ă���������" << flush;
	cin >> a >> b;

	if (a == -1) {
		return false;
	}

	cout << MESSAGE[Compare(a, b)] << endl;
	return true;

}

int main() {


	while (Compare()); {
		// �������Ȃ�
	}

}