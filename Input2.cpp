#include <iostream>
#include <cstdlib>
using namespace std;

bool SkipOnError(istream& istr) {

	if(istr.fail()) {

		if (istr.eof()) {
			return (EXIT_FAILURE);
		}

		// ˆê•¶Žš“Ç‚Ý”ò‚Î‚µ‚Ü‚·
		char ch;
		istr.clear();
		istr >> ch;

		return true;

	}
	else {
		return false;
	}

}

int main() {

	int n;

	do {
		cin >> n;
	} while (SkipOnError(cin));

	cout << "“ü—Í‚³‚ê‚½’l‚Í" << n << "‚Å‚·" << endl;

}