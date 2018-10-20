#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_

class IntArray {
public:
	// �R���X�g���N�^�E�f�X�g���N�^
	IntArray(int size);
	~IntArray();

	// �R�s�[�R���X�g���N�^
	IntArray(const IntArray& other);

public:
	// ������Z�q�̃I�[�o�[���[�h
	void operator=(const IntArray& other);

public:
	// �����o�ւ̃A�N�Z�X�֐�
	int Get(int i);
	void Set(int i, int value);

	// �z��̃T�C�Y��Ԃ�
	int Size();

private:
	// �C���f�b�N�X�̃`�F�b�N
	void CheckIndex(int i);

private:
	int* m_array;	// ���I�z��
	int m_size;		//�z��̗v�f��

};

#endif	// #ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_