#pragma warning(disable:4996)
#include "IntArray.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

// �R���X�g���N�^
IntArray::IntArray(int size) {
	m_array = new int[size];
	m_size = size;

	cout << "�R���X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł�" << endl;
}

// �R�s�[�R���X�g���N�^
IntArray::IntArray(const IntArray& other) {
	m_array = new int[other.m_size];
	m_size = other.m_size;

	// copy�̓������̓��e���R�s�[����֐��̂悤�Ȃ��̂ł�
	copy(other.m_array, other.m_array + m_size , m_array);

	cout << "�R�s�[�R���X�g���N�^���Ă΂�܂���" << endl;
}

// �f�X�g���N�^
IntArray::~IntArray() {
	delete[] m_array;

	cout << "�f�X�g���N�^���Ă΂�܂���"
		<< "�v�f����" << m_size << "�ł���" << endl;
}

// ������Z�q�̃I�[�o�[���[�h
void IntArray::operator=(const IntArray& other) {

	int* array = new int[other.m_size];

	delete[] m_array;
	m_array = array;
	m_size = other.m_size;

	// copy�̓������̓��e���R�s�[����֐��̂悤�Ȃ��̂ł�
	copy(other.m_array, other.m_array + m_size, m_array);
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
	}
	else {

		cout << "�C���f�b�N�X���s���ł�" << endl
			<< "�l�F" << i << endl;

		exit(EXIT_FAILURE);

	}

}

// �z��̃T�C�Y��Ԃ�
int IntArray::Size() {
	return m_size;
}
