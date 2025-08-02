#include <iostream>
using namespace std;

int result(int n, int m);
int main() {
	int n, m;
	do {
		cout << "출력할 숫자의 위치를 입력해주세요(N번째 줄 M번째 숫자): ";
		cin >> n >> m;
	} while (n > 25 || m < 1 || m > n);

	cout << n << "번째 줄의 " << m << "번째 숫자는 " << result(n, m) << "입니다." << endl;
}

int result(int n, int m) {
	if (n == 1 && m == 1) {
		return 1;
	}
	if (n < 1 || m > n) {
		return 0;
	}
	return result(n - 1, m - 1) + result(n - 1, m);
}