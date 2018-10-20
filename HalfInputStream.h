#ifndef HALFINPUTSTREAM_H_
#define HALFINPUTSTREAM_H_

#include "InputStream.h"

// 入力クラス
class HalfInputStream :
	// 継承
	public InputStream
{

protected:
	virtual void SetBase();			// 値を設定する基本関数

};

#endif // #HALFINPUTSTREAM_H_