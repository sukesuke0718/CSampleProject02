#ifndef EXCEPTION_H_
#define EXCEPTION_H_

class Exception {

public:
	virtual ~Exception();

public:
	// �G���[�̏󋵂��o�͂���֐�
	virtual const char* What() const = 0;
};

#endif	// EXCEPTION_H_