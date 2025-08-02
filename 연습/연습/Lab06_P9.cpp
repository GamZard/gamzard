#include <iostream>
using namespace std;

int main() {
	double r;
	double h;
	double result;

	cout << "반지름을 입력하세요: ";
	cin >> r;
	cout << "높이를 입력하세요: ";
	cin >> h;
	result = 3.14 * r * r * h / 3;

	cout << endl << "부피: " << result << endl;
}