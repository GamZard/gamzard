#include <iostream>
using namespace std;

int sum(int n);
int main() {
	int n;
	cout << "양의 정수를 입력하세요: ";
	cin >> n;
	cout << "1부터 " << n << "까지의 합: " << sum(n) << endl;
}

int sum(int n) {
	if (n == 1) {
		return 1;
	}
	return sum(n - 1) + n;
}