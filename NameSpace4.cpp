#include <iostream>
using namespace std;

void Show() {

	cout << "Hello!" << endl;

}

namespace Myprogram {

	void Show() {
		cout << "‚â‚ A‚±‚ñ‚É‚¿‚Í" << endl;
	}

	void Run() {
		Show();
	}

}

int main() {

	Myprogram::Run();

}
