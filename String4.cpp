#include <iostream>
#include <string>
using namespace std;

int main() {

	while (true) {

		string line;
		
		cout << "������������͂��Ă������� > " << flush;

		// ���͂��ꂽ��s��������
		getline(cin, line);

		if (line == "quit") {
			break;
		}

		// �w�肵���������T���֐�
		string::size_type pos = line.rfind("�B");

		if (pos == string::npos) {
			line += "�A���l�B";
		}
		else {

			// �w�肵���ӏ��ɕ������}������֐�
			line.insert(pos, "�A���l");
		}

		cout << line << endl;

	}


}