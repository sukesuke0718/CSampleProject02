#ifndef ArraySTREAM_H_
#define ArraySTREAM_H_

#include "Stream.h"

// ���̓N���X
class ArrayStream:
	// �p��
	public Stream
{

public:
	ArrayStream(const double* array, int size);
	~ArrayStream();					// �f�X�g���N�^

protected:
	virtual void SetBase();			// �l���Z�b�g�����{�֐�

private:
	double* m_array;				// �z��
	int m_i;						// ���݂̃C���f�b�N�X
};

#endif // #ArraySTREAM_H_