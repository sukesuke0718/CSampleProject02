#include "HalfInputStream.h"
#include <iostream>
using namespace std;

int main() {

	HalfInputStream stream;

	stream.Set();

	cout << stream.Get() << endl;

}