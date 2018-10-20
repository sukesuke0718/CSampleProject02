#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

int main() {

	InputSteram istream;

	cout << "> " << flush;
	istream.Set();
	cout << istream.Get() << endl;

	Stream stream;

	stream.Set();
	cout << stream.Get() << endl;

}