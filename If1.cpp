#include<iostream>
using namespace std;

void BirthMonth() {

	int month;

	cout << "何月生まれですか？ > " << flush;

	/* 画面入力した値を受け取り変数にセットする */
	cin >> month;
	
	if (1 <= month && month <= 12) {
		
		cout << month << "月なんですか" << endl;

	}else {
		
		cout << month << "月はありません" << endl;

	}
}

int main() {

	BirthMonth();
	BirthMonth();

}
