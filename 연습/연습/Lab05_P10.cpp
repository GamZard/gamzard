#include <iostream>
using namespace std;

int main() {
	int N;
	int num;
	int sum = 0;

	do {
		cout << "입력받을 숫자의 개수를 입력해 주세요: ";
		cin >> N;
	} while (N <= 0);

	for (int i = 0; i < N; i++) {
		do {
			cout << i + 1 << "번째 숫자를 입력해 주세요: ";
			cin >> num;
		} while (num < 0);
		sum = sum + num / 100 + (num % 100 / 10) + num % 10;
	}
	cout << endl << N << "개 숫자의 각 자리수 합: " << sum;
}