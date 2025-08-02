#include <iostream>
using namespace std;

int main() {
	int n;
	int m;
	int sum = 0;
	cout << "N과 M을 입력해 주세요: ";
	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		sum += i;
	}
	cout << n << "부터 " << m << "까지의 정수들의 합은 " << sum << "입니다.";
}