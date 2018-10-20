#include<iostream>
using namespace std;

void ShowCode(char ch) {

	cout << "u" << ch << "v‚É‚Ó‚ç‚ê‚½”Ô†‚Í"
		<< (int)(unsigned char)ch << "‚Å‚·B" << endl;

}

int main() {

	ShowCode('0');
	ShowCode('A');

}