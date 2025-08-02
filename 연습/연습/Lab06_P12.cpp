#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int r1, r2, r3;
	double s;
	double result;

	cout << "삼각형 세 변의 길이를 입력하세요: ";
	cin >> r1 >> r2 >> r3;
	s = (r1 + r2 + r3) / 2.0;
	result = sqrt(s * (s - r1) * (s - r2) * (s - r3));
	cout << endl << "넓이: " << result;
}