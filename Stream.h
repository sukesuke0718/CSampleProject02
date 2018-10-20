#ifndef STREAM_H_
#define STREAM_H_

// 0以上の値を順次取得していく処理を行うための基底クラス
class Stream {

public:
	Stream();
	virtual ~Stream();				// 仮想デストラクタ

public:
	double Get() const;				// 設定された値を取得
	virtual bool Set();				// 値を設定

protected:
	double m_n;						// 現在の値

	// 純粋仮想関数
	// 派生先で定義すればよい
	virtual void SetBase() = 0;		// 値を設定する基本関数
};

#endif // #STREAM_H_