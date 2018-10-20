#include<iostream>
using namespace std;

const int MAX_NAME = 16;

// 構造体を作成
struct Student {
	char name[MAX_NAME + 1];
	int scoreJapanese;
	int scoreMath;
	int scoreEnglish;
};

// 構造体はデータ量が多くなるので
// 参照渡しにしておくとよい
void Show(const Student& student) {

	cout << "名前：" << student.name << endl
		<< "国語：" << student.scoreJapanese << "点"
		<< "、数学：" << student.scoreMath << "点"
		<< "、英語：" << student.scoreEnglish << "点" << endl;
}

int main() {

	// 配列として宣言
	Student student[] = {
		{"赤井勇", 73, 56, 60},
		{ "坂木俊", 45, 94, 65 },
		{ "瀧幸之助", 96, 78, 79 }
	};

	// 配列のサイズを計算
	int size = sizeof student / sizeof *student;

	for (int i = 0; i < size; ++i) {

		Show(student[i]);
	}

}