#include "HalfInputStream.h"
#include <iostream>
using namespace std;

// 値をセットする基本関数
void HalfInputStream::SetBase() {

	InputStream::SetBase();
	m_n /= 2;

}