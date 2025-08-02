#include <iostream>
using namespace std;

int main() {
	int speed;

	cout << "자동차의 속력을 입력해주세요: ";
	cin >> speed;

	if (speed > 120) {
		cout << "과속 주행입니다." << endl;
	}
	else if (120 >= speed && speed >= 50) {
		cout << "정속 주행입니다." << endl;
	}
	else {
		cout << "저속 주행입니다." << endl;
	}
}