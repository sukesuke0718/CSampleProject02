#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; ++i) {

		int a, b, op, result;

		cout << "第一項＞" << flush;
		cin >> a;

		cout << "第二項＞" << flush;
		cin >> b;

		cout << "1:加算、2:減算、3:乗算、4:除算＞" << flush;
		cin >> op;

		switch (op)
		{
		case 1:
			result = a + b;
			//breakを忘れないように注意
			break;

		case 2:
			result = a - b;
			break;

		case 3:
			result = a * b;
			break;

		case 4:
			result = a / b;
			break;

		default:
			cout << "真面目にせんかい" << endl;
			/*
			この場合、答えを表示する処理は飛ばす
			ためにcontinueを使用している
			*/
			continue;
		}

		cout << "答えは" << result << endl;

	}

}