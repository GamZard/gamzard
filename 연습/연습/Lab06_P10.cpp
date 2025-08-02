#include <iostream>
#include <cmath>
using namespace std;

void calculateRoot(int a, int b, int c);
int main() {
	int a;
	int b;
	int c;	

	cout << "계수 a, b, c를 입력하세요: ";
	cin >> a >> b >> c;
	calculateRoot(a, b, c);
}

void calculateRoot(int a, int b, int c) {
	int x1;
	int x2;

	x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	if (b * b - 4 * a * c >= 0) {
		cout << "이차방정식의 두 근: " << x1 << ", " << x2;
	}
	else
		cout << "실근이 없습니다!" << endl << "이차방정식의 두 근: " << x1 << ", " << x2;
}