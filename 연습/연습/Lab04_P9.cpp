#include <iostream>
using namespace std;

int main() {
	int select;
	int num1;
	int num2;

	cout << "연산을 선택하세요 (1: 덧셈, 2: 뺄셈, 3: 곱셈, 4: 나눗셈): ";
	cin >> select;

	if (select == 1) {
		cout << "두 개의 숫자를 입력하세요: ";
		cin >> num1 >> num2;
		cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	}
	else if (select == 2) {
		cout << "두 개의 숫자를 입력하세요: ";
		cin >> num1 >> num2;
		cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	}
	else if (select == 3) {
		cout << "두 개의 숫자를 입력하세요: ";
		cin >> num1 >> num2;
		cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	}
	else if (select == 4) {
		cout << "두 개의 숫자를 입력하세요: ";
		cin >> num1 >> num2;
		if (num2 == 0) {
			cout << "0으로 나눌 수 없습니다." << endl;
		}
		else {
			cout << num1 << " / " << num2 << " = " << static_cast<double>(num1) / num2 << endl;
		}
	}
	else {
		cout << "잘못된 선택입니다." << endl;
	}
}