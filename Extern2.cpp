extern int a;	// Extern1.cppのaを参照している
void Func();	// Extern1.cppのFuncを参照している

int main() {

	Func();

	// Extern1.cppのaを操作
	a = 5;
	Func();

}