#include<iostream>
using namespace std;

int main() {

	char hello[] = "Hello!";

	// sizeof で配列の要素数を取している
	for (int i = 0; i < (int)sizeof hello;++i) {

		cout << (int)(unsigned char)hello[i] << ",";

	}

}