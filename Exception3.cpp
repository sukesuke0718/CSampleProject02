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
		cerr << "�������ŃL���b�`����邩��" << endl;
	}

}

int main() {

	try {

		Error();

	}
	catch (const char* error) {
		cerr << "����Ƃ�����������" << endl;
	}


}