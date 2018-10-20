#include "InputStream.h"
#include <iostream>
using namespace std;

// コンストラクタ
InputStream::InputStream() :
	Stream()
{

}


InputStream::InputStream(double n):
	Stream()
{
	cout << "InputStream" << endl;
}


// 入力関数
void InputStream::SetBase() {
	cin >> m_n;
}