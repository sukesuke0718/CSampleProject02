#include "Stream.h"
#include<iostream>
using namespace std;

// �R���X�g���N�^
Stream::Stream():
	m_n(-1)
{

}

// �f�X�g���N�^
Stream :: ~Stream() {}

// �ݒ肳�ꂽ�l���擾
double Stream::Get() const {
	return m_n;
}

// �l��ݒ�
bool Stream::Set() {

	// ���z�֐�
	// �����͔h���N���X�ŋL��
	SetBase();

	// �擾�����l�����Ȃ�false��Ԃ�
	// ���莩�̂����ꂼ��ɏ����̂ł͂Ȃ���ɂ܂Ƃ߂邱�ƂŁA
	// �ԈႢ�����点��
	return m_n >= 0;

}