#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
using namespace std;

const char SRC_NAME[] = "hello.txt";
const char DST_NAME[] = "hello2.txt";

const int BUF_SIZE = 1024;

int main() {

	fstream src;		// �R�s�[���t�@�C��
	fstream dst;		// �R�s�[��t�@�C��

	src.open(SRC_NAME, ios::in | ios::binary);
	
	if (!src.is_open()) {
		return EXIT_FAILURE;
	}

	dst.open(DST_NAME, ios::out | ios::binary);

	if (!dst.is_open()) {
		src.close();
		return EXIT_FAILURE;
	}

	// �t���O
	bool error = false;

	do {

		char buf[BUF_SIZE];

		src.read(buf, sizeof buf);

		// �ǂݍ��݂̏ꍇ�̓t�@�C���̍Ō�ł�fail�����ɂȂ�̂ŏ��O����
		if (src.fail() && !src.eof()) {
			error = true;
			break;
		}

		dst.write(buf, src.gcount());
		if (dst.fail()) {
			error = true;
			break;
		}

	} while (!src.eof());

	dst.close();
	src.close();

	// �G���[�����������ہA�t�@�C�����폜���ă��b�Z�[�W��\������
	if (error) {

		cout << "�t�@�C������ŃG���[���������܂����I" << endl;

		// �t�@�C�����폜����
		remove(DST_NAME);
		return EXIT_FAILURE;

	}

}