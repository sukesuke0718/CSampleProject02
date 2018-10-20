#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void InitRand() {

	// —”í‚ğİ’è
	srand((unsigned int)time(NULL));

}


int Dice() {

	return rand() % 6 + 1;
}

int main() {

	InitRand();

	for (int i = 0; i < 20; ++i) {

		cout << Dice() + Dice() << ' ';

	}

	cout << endl;

}