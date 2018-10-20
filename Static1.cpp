#include<iostream>
#include<algorithm>		// fill_nを使用するためのヘッダ
using namespace std;

//アドレスが一定になることのチェック

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {

	cout << "アドレスが常に一定かのチェック" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

//静的変数aと自動変数bのアドレスを出力
void CheckAddress_Sub() {

	static int a;
	int b;

	cout << "&a = " << (size_t)&a << endl
		 << "&b = " << (size_t)&b << endl;
}

// 別の関数から呼び出し
void CheckAddress_Sub2() {

	cout << "in Sub2" << endl;
	CheckAddress_Sub();

}

//初期化が1回のみのチェック
void CheckInitOnce_Sub();

void CheckInitOnce() {

	cout << "初期化が一回しかされないことのチェック" << endl;

	CheckInitOnce_Sub();
	CheckInitOnce_Sub();
}

//++a と++bの影響が2度目以降の呼び出しに影響するかチェック
void CheckInitOnce_Sub() {

	static int a = 3;
	int b = 3;

	cout << "a = " << a << endl
		 << "b = " << b << endl;

	++a;
	++b;

}

// 初期化のチェック
void CheckZeroInit_Sub();
void CheckZeroInit_Sub2();

void CheckZeroInit() {

	cout << "0で初期化されるかのチェック " << endl;

	CheckZeroInit_Sub();
	CheckZeroInit_Sub2();
}

//静的変数が何で初期化されているかのチェック
void CheckZeroInit_Sub() {

	static int a, b, c, d;
	cout << a << "," << b << "," << c << "," << d << endl;
}

//自動変数が何で初期化されているかのチェック
void CheckZeroInit_Sub2() {

	int a = 1, b = 1, c = 1, d = 1;
	cout << a << "," << b << "," << c << "," << d << endl;
}

//値が保証されているかチェック
void CheckInvariant_Sub(int*& pa, int*& pb);
void CheckInvariant_Sub2();

void CheckInvariant() {

	cout << endl << "値が保証されているかのチェック" << endl;

	int *pa, *pb;

	CheckInvariant_Sub(pa, pb);
	CheckInvariant_Sub2();

	cout << "*pa = " << *pa << endl
		 << "*pb = " << *pb << endl;
}

//静的変数aと自動変数bのアドレスを引数を通して返す
// int*& はint*への参照
void CheckInvariant_Sub(int*& pa, int*& pb) {

	static int a = 9;
	int b = 9;
	pa = &a;
	pb = &b;
}

//大きな変数を作って、それをすべて0で埋める
void CheckInvariant_Sub2() {
	int dummy[100];
	fill_n(dummy , 100 ,0);
}

int main() {

	CheckAddress();
	CheckInitOnce();
	CheckZeroInit();
	CheckInvariant();

}