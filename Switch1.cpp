#include<iostream>
using namespace std;

int main() {

	for (int i = 0; i < 5; ++i) {

		int a, b, op, result;

		cout << "��ꍀ��" << flush;
		cin >> a;

		cout << "��񍀁�" << flush;
		cin >> b;

		cout << "1:���Z�A2:���Z�A3:��Z�A4:���Z��" << flush;
		cin >> op;

		switch (op)
		{
		case 1:
			result = a + b;
			//break��Y��Ȃ��悤�ɒ���
			break;

		case 2:
			result = a - b;
			break;

		case 3:
			result = a * b;
			break;

		case 4:
			result = a / b;
			break;

		default:
			cout << "�^�ʖڂɂ��񂩂�" << endl;
			/*
			���̏ꍇ�A������\�����鏈���͔�΂�
			���߂�continue���g�p���Ă���
			*/
			continue;
		}

		cout << "������" << result << endl;

	}

}