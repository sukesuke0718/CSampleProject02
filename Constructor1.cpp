#include<iostream>
using namespace std;

class Integer {
public:
	int m_vlaue;

	Integer();
	void Show();

};

// �R���X�g���N�^
Integer::Integer() {
	m_vlaue = 0;
}

//�����o�ϐ��̕\��
void Integer::Show() {
	cout << m_vlaue << endl;
}

int main() {
	Integer a, b, c;

	a.Show();
	b.Show();
	c.Show();

}