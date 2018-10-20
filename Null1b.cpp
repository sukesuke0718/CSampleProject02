#include<iostream>
using namespace std;

// �l���A�h���X���ύX�s��
// �z��Ȃ̂Ń|�C���^�ɂ��Ă���H
const char* const MONTH_NAME[] = {
	"�r��","�@��","�퐶","�K��","�H��","������",
	"����","�t��","����","�_����","����","�t��"
};

const char* GetOldMonthName(int month) {

	if (1 <= month && month <= 12) {
		return MONTH_NAME[month - 1];
	}
	// ����ȊO�̏ꍇ
	else {
		// �k���|�C���^
		return NULL;
	}

}

int main() {

	int month;

	cout << "���͉����ł����H > " << flush;
	cin >> month;

	const char* name = GetOldMonthName(month);

	if (name == 0) {
		cout << "����Ȍ��͂���܂���" << endl;
	}
	else {
		cout << name << endl;
	}

}