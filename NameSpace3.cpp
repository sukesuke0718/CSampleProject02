#include <iostream>
using namespace std;

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