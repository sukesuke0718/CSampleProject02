#include<iostream>
using namespace std;

int main() {

	char hello[] = "Hello!";

	// sizeof ‚Å”z—ñ‚Ì—v‘f”‚ğæ‚µ‚Ä‚¢‚é
	for (int i = 0; i < (int)sizeof hello;++i) {

		cout << (int)(unsigned char)hello[i] << ",";

	}

}