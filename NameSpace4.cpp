#include <iostream>
using namespace std;

void Show() {

	cout << "Hello!" << endl;

}

namespace Myprogram {

	void Show() {
		cout << "やあ、こんにちは" << endl;
	}

	void Run() {
		Show();
	}

}

int main() {

	Myprogram::Run();

}
