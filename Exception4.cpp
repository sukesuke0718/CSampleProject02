#include<iostream>
using namespace std;

void Error() {

	int* p = NULL;

	try {
		p = new int[10];
		throw "ÉGÉâÅ[î≠ê∂";
		delete[] p;
	}
	catch (const char* error) {
		cerr << "ÉÅÉÇÉäÇäJï˙ÇµÇ‹Ç∑" << endl;
		delete[] p;
		throw error;
	}

}

int main() {

	try {
		Error();
	}
	catch (const char* error) {
		cerr << error << endl;
	}
}