#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "숫자를 입력해주세요: ";
	cin >> num;
	cout << endl << "카운트다운" << endl;

	switch (num) {
	case 5:
		cout << "다섯" << endl;
	case 4:
		cout << "넷" << endl;
	case 3:
		cout << "셋" << endl;
	case 2:
		cout << "둘" << endl;
	case 1:
		cout << "하나" << endl;
	}
}