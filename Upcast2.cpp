#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

void Show(const Stream& stream) {
	cout << stream.Get() << endl;
}

int main() {

	InputSteram istream;

	cout << "> " << flush;

	istream.Set();
	Show(istream);

	static const double ARRAY[] = { 3,-1 };
	ArraySteram astream(ARRAY);

	astream.Set();
	Show(astream);

}