#include<iostream>
using namespace std;

enum CompareResult {

	CR_LESS_THEN,		// ��菬����
	CR_EQUAL_TO,		//������
	CR_GREATHER_THEN,	// ���傫��

};

CompareResult Compare(int a,int b) {

	if (a < b) {
		return CR_LESS_THEN;
	}else if (a > b) {
		return CR_GREATHER_THEN;
	}else {
		return CR_EQUAL_TO;
	}

}

bool Compare() {

	int a, b;

	cout << "������2���͂��ĉ�������" << flush;
	cin >> a >> b;

	if (a == 1) {
		return false;
	}

	switch (Compare(a,b))
	{
	case CR_LESS_THEN:
		cout << "�O�҂͌�҂�菬�����ł�" << endl;
		break;

	case CR_EQUAL_TO:
		cout << "���҂͓������ł�" << endl;
		break;

	case CR_GREATHER_THEN:
		cout << "�O�҂͌�҂��傫���ł�" << endl;
		break;

	}

	return true;
}

int main() {

	while(Compare()) {
		// �������Ȃ�

	}

}