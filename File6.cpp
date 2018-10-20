#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

const int PAGE_WITDH = 16;
const int PAGE_HEIGHT = 16;
const int PAGE_SIZE = PAGE_WITDH * PAGE_HEIGHT;

class DumpFile {

public:
	bool Run();			// ��A�̏��������s

private:
	bool Open();		// �t�@�C�����J��
	void Close();		// �t�@�C�������
	void Dump();		// 1�y�[�W�����_���v
	bool Control();		// �y�[�W�̐���

private:
	fstream m_file;		// �t�@�C��
	int m_page;			// ���݂̃y�[�W

};

// �t�@�C�����J��
// �t�@�C�����J�������ǂ�����Ԃ�
bool DumpFile::Open() {

	string filename;

	cout << "�t�@�C�����@���@" << flush;

	getline(cin, filename);

	m_file.open(filename.c_str(), ios::in | ios::binary);
	m_page = 0;

	return m_file.is_open();

}

// �t�@�C�������
void DumpFile::Close() {
	m_file.close();
}

// 1�y�[�W�����_���v
void DumpFile::Dump() {

	cout << endl;

	// �G���[�ɂ��A�N�Z�X�֎~������
	// �t�@�C���̏I�[�ɍs���������G���[�ƂȂ�
	m_file.clear();

	// �y�[�W�T�C�Y��1�y�[�W���Ƃ��Ă���
	// �w�肵���t�@�C���|�C���^�̈ʒu�Ɉړ����ēǂݏo���֐�
	m_file.seekg(m_page * PAGE_SIZE);

	for (int h = 0; h < PAGE_HEIGHT; ++h){
	
		unsigned char buf[PAGE_WITDH];

		// �t�@�C����ǂݍ���
		m_file.read((char*)buf, sizeof buf);

		// �ǂݍ��񂾕�����\������
		for (int w = 0, size = m_file.gcount(); w < size; ++w) {
			printf("%02X", buf[w]);
		}

		cout << endl;
	
	}

}

// �y�[�W�̐���
// false��Ԃ��ƃ_���v���I��
bool DumpFile::Control() {

	while (true) {

		string command;

		cout << "�R�}���h�H�in�F��/ p�F�O/ q�F�I���j > " << flush;
		getline(cin, command);

		if (command == "n") {

			// �Ō�̃y�[�W�łȂ���Ύ���
			if (!m_file.eof()) {
				++m_page;
				return true;
			}
			else {
				// �R�}���h���ē���
			}

		}
		else if(command == "p"){

			// �ŏ��̃y�[�W�łȂ���Ύ���
			if (m_page > 0) {
				--m_page;
				return true;
			}
			else {
				// �R�}���h���ē���
			}
		}
		else if (command == "q") {
			// �I��
			return false;
		}

	}

}

// ��A�̏��������s
// ����ɏI���������ǂ�����Ԃ�
bool DumpFile::Run() {

	if (!Open()) {
		return false;
	}

	do {
		Dump();
	} while (Control());

	Close();

	return true;

}

int main() {

	DumpFile dump;

	if (!dump.Run()) {
		return EXIT_FAILURE;
	}


}