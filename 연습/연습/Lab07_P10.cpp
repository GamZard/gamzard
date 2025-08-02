#include <iostream>
using namespace std;

int result(int num1, int num2, char a);
double result(double num1, double num2, char a);

int main() {
	int num1, num2;
	double n1, n2;
	char a;
	cout << "정수 연산식을 입력하세요: ";
	cin >> num1 >> a >> num2;
	cout << "계산 결과: " << result(num1, num2, a) << endl;

	cout << "실수 연산식을 입력하세요: ";
	cin >> n1 >> a >> n2;
	cout << "계산 결과: " << result(n1, n2, a);
}

int result(int num1, int num2, char a) {
	switch (a) {
	case '/':
		if (num2 == 0) {
			return 0;
		}
		else {
			return num1 / num2;
		}
		break;
	case '+':
		return num1 + num2;
		break;
	case '-':
		return num1 - num2;
		break;
	case '*':
		return num1 * num2;
		break;
	default:
		return 0;
		break;
	}
}

double result(double num1, double num2, char a) {
	switch (a) {
	case '/':
		if (num2 == 0) {
			return 0;
		}
		else {
			return num1 / num2;
		}
		break;
	case '+':
		return num1 + num2;
		break;
	case '-':
		return num1 - num2;
		break;
	case '*':
		return num1 * num2;
		break;
	default:
		return 0;
		break;
	}
}