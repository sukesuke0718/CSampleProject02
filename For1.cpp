#include<iostream>
using namespace std;

int score[] = { 641,542,721,0,611,921,123,891 };


int main() {

	int sum = 0;

	for (int i = 0; i < 8; i++) {

		sum += score[i];

	}

	cout << "�N���X�̕��ϓ_��" << sum / 8.0 << "�ł�" << endl;

}