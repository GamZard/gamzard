#include <iostream>
using namespace std;

void numInput();

int main() {
	int num1;
	int num2;
	numInput();
	cin >> num1 >> num2;
	cout << endl << "num1 + num2 = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 / num2 << endl;
	cout << "num1 % num2 = " << num1 % num2 << endl;

}

void numInput() {
	cout << "두 정수 입력: ";
}