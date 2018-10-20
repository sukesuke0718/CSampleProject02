#include<iostream>
using namespace std;

//¼—ï‚ğº˜a‚É•ÏŠ·
//•Ï‚È’l‚ª“n‚³‚ê‚½ê‡A0‚ğ•Ô‚·
int WesternToshouwa(int western) {

	if (1926 <= western && western <= 1989) {
		return western - 1925;
	}else {
		return 0;
	}

}

void Shouwa() {

	int western;

	cout << "¼—ï‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢ > " << flush;
	cin >> western;

	int  shouwa = WesternToshouwa(western);

	if (shouwa == 0) {
		cout << "‚»‚Ì”N‚Íº˜a‚Å‚Í‚ ‚è‚Ü‚¹‚ñ" << endl;
	}else {
		cout << "‚»‚Ì”N‚Íº˜a" << shouwa << "”N‚Å‚·" << endl;
	}

}

int main() {

	Shouwa();
	Shouwa();

}