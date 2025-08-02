#include <iostream>
using namespace std;

int main() {
	double num;
	int num2;
	cout << "부동 소수점 입력: ";
	cin >> num;
	cout << endl << "원래 값: " << num << endl;

	num2 = static_cast<int>(num);
	cout << "정수 부분: " << num2 << endl;
	cout << "소수점 아래 부분: " << num - num2 << endl;
}