#include "InputStream.h"
#include <iostream>
using namespace std;

int main() {

	InputStream stream(-1);

	cout << stream.Get() << endl;

}