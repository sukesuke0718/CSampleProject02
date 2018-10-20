#include "Array.h"
#include <iostream>
#include <string>
using namespace std;

int main() {

	Array<string> array(5);

	for (int i = 0, size = array.Size(); i < size; ++i) {

		array.Set(i, "hoge");

	}


	for (int i = 0, size = array.Size(); i < size; ++i) {

		cout << array.Get(i) << ' ';
	}

	cout << endl;

}