#include "InputStream.h"
#include <iostream>
using namespace std;


bool Average(InputSteram& stream) {

	int count;
	double avr = 0;

	for (count = 0; stream.Set(); ++count) {
		avr += stream.Get();
	}

	if (count == 0) {
		return false;
	}

	avr /= count;

	cout << "•½‹Ï’l‚Í" << avr << "‚Å‚·B" << endl;
	return true;

}

int main() {

	while (true) {
	
		InputSteram stream;

		if (!Average(stream)) {
			break;
		}

	}

}
