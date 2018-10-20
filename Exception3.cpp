#include<iostream>
using namespace std;

void Error() {

	try {
		throw 1;
	}
	catch (int error) {
		throw "Error";
	}
	catch (const char* error) {
		cerr << "‚±‚Á‚¿‚ÅƒLƒƒƒbƒ`‚³‚ê‚é‚©‚È" << endl;
	}

}

int main() {

	try {

		Error();

	}
	catch (const char* error) {
		cerr << "‚»‚ê‚Æ‚à‚±‚Á‚¿‚©‚È" << endl;
	}


}