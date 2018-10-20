extern int a;	// Extern1.cpp‚Ìa‚ğQÆ‚µ‚Ä‚¢‚é
void Func();	// Extern1.cpp‚ÌFunc‚ğQÆ‚µ‚Ä‚¢‚é

int main() {

	Func();

	// Extern1.cpp‚Ìa‚ğ‘€ì
	a = 5;
	Func();

}