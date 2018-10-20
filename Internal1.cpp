#include<iostream>
using namespace std;

// このファイル内でのみ使用可能
static int a = 2;

// このファイルでのみ使用可能
static void Func1() {
	cout << "a(1) = " << a << endl;
}

// 他のファイルでもプロトタイプ宣言を行うことで
// 使用可能となる
void Func2() {
	Func1();
}