#include <iostream>
using namespace std;

double result(int n);
int main() {
	int n;

	cout << "시에르핀스키 삼각형의 단계를 입력해 주세요(0단계의 넓이는 2048입니다.) : ";
	cin >> n;
	cout << n << "단계 시에르핀스키 삼각형의 넓이는 " << result(n) << "입니다." << endl;
}

double result(int n) {
	if (n == 0) {
		return 2048;
	}
	return result(n - 1) * 3 / 4;
}