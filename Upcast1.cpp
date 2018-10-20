#include "InputStream.h"
#include <iostream>
using namespace std;

int main() {

	InputSteram stream;

	cout << "> " << flush;

	stream.Set();

	const Stream& ref = stream;

	cout << ref.Get() << endl;


}