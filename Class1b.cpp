#include<iostream>
using namespace std;

const int MAX_NAME = 16;

class Student {
public:
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;

	// メンバ関数
	void Show();
};

// Studentの関数であることを明らかにする必要あり
void Student::Show() {

	cout << "名前：" << name << endl
		<< "国語：" << scoreJapanese << "点"
		<< "、数学：" << scoreMath << "点"
		<< "、英語：" << scoreEnglish << "点" << endl;
}

int main() {

	Student student[] = {
		{ "赤井鋼",73,60,75 },
	{ "寺田鈴",95,86,90 },
	{ "本田浩二",96,86,97 }
	};

	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {
		// メンバ関数を呼び出し
		student[i].Show();
	}

}