#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; ++i) {

		int a, b, op, result;

		cout << "‘æˆê€„" << flush;
		cin >> a;

		cout << "‘æ“ñ€„" << flush;
		cin >> b;

		cout << "1:‰ÁZA2:Œ¸ZA3:æZA4:œZ„" << flush;
		cin >> op;

		switch (op)
		{
		case 1:
			result = a + b;
			//break‚ğ–Y‚ê‚È‚¢‚æ‚¤‚É’ˆÓ
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
			cout << "^–Ê–Ú‚É‚¹‚ñ‚©‚¢" << endl;
			/*
			‚±‚Ìê‡A“š‚¦‚ğ•\¦‚·‚éˆ—‚Í”ò‚Î‚·
			‚½‚ß‚Écontinue‚ğg—p‚µ‚Ä‚¢‚é
			*/
			continue;
		}

		cout << "“š‚¦‚Í" << result << endl;

	}

}