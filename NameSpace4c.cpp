#include <iostream>
using namespace std;

void Show();

namespace MyProgram {
	void Run();
	void Show();
}

int main() {

	MyProgram::Run();
}


void Show() {
	cout << "Hello!" << endl;
}

namespace MyProgram {

	void Run() {
		Show();
	}

	void Show() {
		cout << "�₠�A����ɂ��́I" << endl;
	}

}