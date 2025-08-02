#include <iostream>
using namespace std;

int main() {
	int age;
	bool exp;
	bool grad;

	cout << "나이를 입력하세요: ";
	cin >> age;
	cout << "이미 경험이 있습니까? (1: 예, 0: 아니오): ";
	cin >> exp;
	cout << "학위를 소지하고 있습니까? (1: 예, 0: 아니오): ";
	cin >> grad;

	if (grad == 0) {
		cout << "지원이 거절되었습니다. 학위가 필요합니다." << endl;
	}
	else if (age < 18 || exp == 0) {
		cout << "지원이 거절되었습니다. 나이가 18세 이상이고 경험이 있어야 합니다." << endl;
	}
	else if (age >= 18 && exp == 1 && grad == 1) {
		cout << "지원이 승인되었습니다. 면접 일정을 안내드리겠습니다." << endl;
	}
}