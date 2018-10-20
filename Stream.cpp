#include "Stream.h"
#include<iostream>
using namespace std;

// コンストラクタ
Stream::Stream():
	m_n(-1)
{

}

// デストラクタ
Stream :: ~Stream() {}

// 設定された値を取得
double Stream::Get() const {
	return m_n;
}

// 値を設定
bool Stream::Set() {

	// 仮想関数
	// 処理は派生クラスで記載
	SetBase();

	// 取得した値が負ならfalseを返す
	// 判定自体をそれぞれに書くのではなく一つにまとめることで、
	// 間違いが減らせる
	return m_n >= 0;

}