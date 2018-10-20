#include<iostream>
using namespace std;

enum CompareResult {

	CR_LESS_THEN,		// ‚æ‚è¬‚³‚¢
	CR_EQUAL_TO,		//“™‚µ‚¢
	CR_GREATHER_THEN,	// ‚æ‚è‘å‚«‚¢

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

	cout << "”š‚ğ2‚Â“ü—Í‚µ‚Ä‰º‚³‚¢„" << flush;
	cin >> a >> b;

	if (a == 1) {
		return false;
	}

	switch (Compare(a,b))
	{
	case CR_LESS_THEN:
		cout << "‘OÒ‚ÍŒãÒ‚æ‚è¬‚³‚¢‚Å‚·" << endl;
		break;

	case CR_EQUAL_TO:
		cout << "—¼Ò‚Í“™‚µ‚¢‚Å‚·" << endl;
		break;

	case CR_GREATHER_THEN:
		cout << "‘OÒ‚ÍŒãÒ‚æ‚è‘å‚«‚¢‚Å‚·" << endl;
		break;

	}

	return true;
}

int main() {

	while(Compare()) {
		// ‰½‚à‚µ‚È‚¢

	}

}