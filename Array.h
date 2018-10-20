#ifndef ARRAY_H_
#define Array_H_

#include <iostream>
#include <algorithm>
#include <cstdlib>

template <typename TYPE>
class Array
{

public:
	Array(int size);
	Array(const Array& other);
	void operator=(const Array& other);
	virtual ~Array();

public:
	// �A�N�Z�X�֐�
	TYPE Get(int i) const;
	void Set(int i, TYPE value);

public:
	// �z��̃T�C�Y��Ԃ�
	int Size() const;

private:
	// �C���f�b�N�X�̃`�F�b�N
	void CheckIndex(int i) const;

private:
	TYPE * m_array;				// ���I�z��
	int m_size;					// �z��̃T�C�Y��

};

template <typename TYPE>
Array<TYPE>::Array(int size) {

	m_array = new TYPE[size];
	m_size = size;

}

template <typename TYPE>
Array<TYPE>::Array(const Array& other) {

	m_size = other.m_size;
	m_array = new TYPE[m_size];
	std::copy(other.m_array, other.m_array + m_size, m_array);

}

template <typename TYPE>
void Array<TYPE>::operator=(const Array& other) {

	TYPE* array = new TYPE[other.m_size];

	delete[] m_array;
	m_array = array;
	m_sieze = other.m_size;
	std::copy(other.m_array, other.m_array + m_size, m_array);

}

template <typename TYPE>
Array<TYPE>::~Array() {

	delete[] m_array;
}

// �A�N�Z�X�֐�(�擾)
template <typename TYPE>
TYPE Array<TYPE>::Get(int i) const {

	CheckIndex(i);
	return m_array[i];

}

// �A�N�Z�X�֐��i�ݒ�j
template <typename TYPE>
void Array<TYPE>::Set(int i, TYPE value) {

	CheckIndex(i);
	m_array[i] = value;

}

// �z��̃T�C�Y��Ԃ�
template <typename TYPE>
int Array<TYPE>::Size() const{

	return m_size;
}

// �C���f�b�N�X�̃`�F�b�N
template <typename TYPE>
void Array<TYPE>::CheckIndex(int i) const {

	if (0 <= i && i < m_size) {
		// ����
	}
	else {

		std::cerr << "�C���f�b�N�X���s���ł��I" << std::endl
			<< "�l�F" << i << std::endl;
		std::exit(EXIT_FAILURE);
	}
}


#endif ARRAY_H_