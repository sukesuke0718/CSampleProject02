#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_

#include "Stream.h"

// ���̓N���X
class InputStream:
	public Stream
{

public:
	InputStream();
	InputStream(double n);				// �R���X�g���N�^

protected:
	virtual void SetBase();				// �l��ݒ肷���{�֐�
};

#endif // #INPUTSTREAM_H_