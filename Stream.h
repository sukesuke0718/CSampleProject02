#ifndef STREAM_H_
#define STREAM_H_

// 0�ȏ�̒l�������擾���Ă����������s�����߂̊��N���X
class Stream {

public:
	Stream();
	virtual ~Stream();				// ���z�f�X�g���N�^

public:
	double Get() const;				// �ݒ肳�ꂽ�l���擾
	virtual bool Set();				// �l��ݒ�

protected:
	double m_n;						// ���݂̒l

	// �������z�֐�
	// �h����Œ�`����΂悢
	virtual void SetBase() = 0;		// �l��ݒ肷���{�֐�
};

#endif // #STREAM_H_