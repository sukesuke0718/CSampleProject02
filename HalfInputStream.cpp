#include "HalfInputStream.h"
#include <iostream>
using namespace std;

// �l���Z�b�g�����{�֐�
void HalfInputStream::SetBase() {

	InputStream::SetBase();
	m_n /= 2;

}