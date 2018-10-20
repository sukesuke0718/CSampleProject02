#ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_
#define INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_

class IntArray {
public:
	// コンストラクタ・デストラクタ
	IntArray(int size);
	~IntArray();

	// コピーコンストラクタ
	IntArray(const IntArray& other);

public:
	// 代入演算子のオーバーロード
	void operator=(const IntArray& other);

public:
	// メンバへのアクセス関数
	int Get(int i);
	void Set(int i, int value);

	// 配列のサイズを返す
	int Size();

private:
	// インデックスのチェック
	void CheckIndex(int i);

private:
	int* m_array;	// 動的配列
	int m_size;		//配列の要素数

};

#endif	// #ifndef INTARRAY_H_20070101_1529_80AHFDJI_INCLUDED_