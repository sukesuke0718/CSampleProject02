#include<iostream>
using namespace std;

int main() {
	int n[4];
	int* p = n;

	cout << "p       : " << (size_t)p << endl
		 << "&n[0]   : " << (size_t)&n[0] << endl;

	// —v‘f‚ğ2‚Âi‚ß‚é
	p += 2;

	cout << "p       : " << (size_t)p << endl
		<< "&n[2]   : " << (size_t)&n[2] << endl;


	cout << "&n[2] - &n[0]  :" << &n[2] - &n[0] << endl;

}