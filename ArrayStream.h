#ifndef ArraySTREAM_H_
#define ArraySTREAM_H_

#include "Stream.h"

// 入力クラス
class ArrayStream:
	// 継承
	public Stream
{

public:
	ArrayStream(const double* array, int size);
	~ArrayStream();					// デストラクタ

protected:
	virtual void SetBase();			// 値をセットする基本関数

private:
	double* m_array;				// 配列
	int m_i;						// 現在のインデックス
};

#endif // #ArraySTREAM_H_