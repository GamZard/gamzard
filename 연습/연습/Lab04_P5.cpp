#include <iostream>
using namespace std;

int main() {
	int num1;
	char ex;
	int num2;
	cout << "식을 입력해주세요: ";
	cin >> num1 >> ex >> num2;
	cout << num1 << " " << ex << " " << num2 << " = ";

	switch(ex) {
	case '+':
		cout << num1 + num2;
		break;
	case '-':
		cout << num1 - num2;
		break;
	case '*':
		cout << num1 * num2;
		break;
	case '/':
		cout << static_cast<double>(num1) / num2;
		break;
	case '%':
		cout <<num1 % num2;
		break;
	}
}