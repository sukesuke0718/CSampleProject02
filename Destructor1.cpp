#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

class IntArray {
public:
	// �R���X�g���N�^�E�f�X�g���N�^
	IntArray(int size);
	~IntArray();

public:
	// �����o�ւ̃A�N�Z�X�֐�
	int Get(int i);
	void Set(int i, int value);

private:
	// �C���f�b�N�X�̃`�F�b�N
	void CheckIndex(int i);

private:
	int* m_array;	// ���I�z��
	int m_size;		//�z��̗v�f��

};

// �R���X�g���N�^
IntArray::IntArray(int size) {
	m_array = new int[size];
	m_size = size;

	cout << "�R���X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł�" << endl;
}

// �f�X�g���N�^
IntArray::~IntArray() {
	delete [] m_array;

	cout << "�f�X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł���" << endl;
}

// �����o�ւ̃A�N�Z�X�֐�

int IntArray::Get(int i) {
	CheckIndex(i);
	return m_array[i];
}

void IntArray::Set(int i, int value) {
	CheckIndex(i);
	m_array[i] = value;
}

//�C���f�b�N�X�̃`�F�b�N
void IntArray::CheckIndex(int i) {

	if (0 <= i && i <= m_size) {
		// �C���f�b�N�X�͐���ł�
	}else {

		cout << "�C���f�b�N�X���s���ł�" << endl
			<< "�l�F" << i << endl;

		exit(EXIT_FAILURE);

	}

}

// �����̒i�K���m�F����p
void Viss(int num) {
	cout << "Viss�FNo." << num << endl;
}


IntArray a(10);

int main() {

	Viss(1);
	
	IntArray b(20);
	Viss(2);

	IntArray c(30);
	Viss(3);

	{
		IntArray d(40);
		Viss(4);
	}

	Viss(5);

}