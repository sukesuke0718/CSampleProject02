extern int a;	// Extern1.cpp��a���Q�Ƃ��Ă���
void Func();	// Extern1.cpp��Func���Q�Ƃ��Ă���

int main() {

	Func();

	// Extern1.cpp��a�𑀍�
	a = 5;
	Func();

}