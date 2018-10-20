#include<iostream>
using namespace std;

class Integer {
public:
	int m_vlaue;

	Integer();
	Integer(int num);
	void Show();

};

// コンストラクタ
Integer::Integer() {m_vlaue = 0;}
Integer::Integer(int num) { m_vlaue = num; }

//メンバ変数の表示
void Integer::Show() {
	cout << m_vlaue << endl;
}

int main() {
	Integer a;
	Integer b(100), c(50);

	a.Show();
	b.Show();
	c.Show();

}