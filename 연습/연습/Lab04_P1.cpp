#include <iostream>
using namespace std;

int main() {
	int num1;
	int num2;
	int num3;
	int avg;

	cout << "첫 번째 점수 입력: ";
	cin >> num1;
	cout << "두 번째 접수 입력: ";
	cin >> num2;
	cout << "세 번째 점수 입력: ";
	cin >> num3;

	int min, max;
	if (num1 >= num2 && num2 >= num3 ) {
		max = num1;
		min = num3;
	}
	else if( num1 >= num3 && num3 >= num2) {
		max = num1;
		min = num2;
	}
	else if (num2 >= num1 && num1 >= num3) {
		max = num2;
		min = num3;
	}
	else if (num2 >= num3 && num3 >= num1) {
		max = num2;
		min = num1;
	}
	else if (num3 >= num1 && num1 >= num2) {
		max = num3;
		min = num2;
	}
	else if (num3 >= num2 && num2 >= num1) {
		max = num3;
		min = num1;
	}

	if ((min + max) % 2 == 1) {
		avg = (min + max) / 2 + 1;
	}
	else {
		avg = (min + max) / 2;
	}

	cout << endl << "입력한 점수 = " << num1 << " " << num2 << " " << num3 << endl;
	cout << "최소 점수와 최대 점수 = " << min << " " << max << endl;
	cout << "학생의 성적 = " << avg << endl;

	return 0;
}