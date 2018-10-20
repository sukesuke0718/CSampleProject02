#include<iostream>
using namespace std;

void Divide() {

	int a, b;

	cout << "1”Ô–Ú‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>" << flush;
	cin >> a;

	cout << "2”Ô–Ú‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>" << flush;
	cin >> b;

	if (b == 0) {

		cout << "0‚Å‚ÍŠ„‚ê‚Ü‚¹‚ñ" << endl;

	}else {

		cout << a << "/" << b << " = " << a / b << "..." << a % b << endl;

	}

}

int main() {

	Divide();
	Divide();
}
