#include<iostream>
using namespace std;

//西暦を昭和に変換
//変な値が渡された場合、0を返す
int WesternToshouwa(int western) {

	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}else {
		return 0;
	}

}

void Shouwa() {

	int western;

	cout << "西暦を入力してください > " << flush;
	cin >> western;

	int  shouwa = WesternToshouwa(western);

	if (shouwa == 0) {
		cout << "その年は昭和ではありません" << endl;
	}else {
		cout << "その年は昭和" << shouwa << "年です" << endl;
	}

}

int main() {

	Shouwa();
	Shouwa();

}