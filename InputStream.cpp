#include "InputStream.h"
#include <iostream>
using namespace std;

// �R���X�g���N�^
InputStream::InputStream() :
	Stream()
{

}


InputStream::InputStream(double n):
	Stream()
{
	cout << "InputStream" << endl;
}


// ���͊֐�
void InputStream::SetBase() {
	cin >> m_n;
}