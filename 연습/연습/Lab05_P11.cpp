#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "숫자를 입력하세요: ";
	cin >> n;

	int count = 0;
	for (int i = 2; i <= n; i++) {
		if (n % i == 0) {
			cout << i << ' ';
			count++;
			if (count % 5 == 0) {
				cout << endl;
			}
		}
	}
	if (count == 1) {
		cout << "은(는) 소수입니다.";
	}
	cout << endl;
}