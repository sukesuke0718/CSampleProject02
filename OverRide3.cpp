#include "InputStream.h"
#include "ArrayStream.h"
#include <iostream>
using namespace std;

int main() {

	Stream stream;

	stream.Set();
	cout << stream.Get() << endl;


	InputSteram istream;

	cout << "> " << flush;
	istream.Set();
	cout << istream.Get() << endl;

}