#include <iostream>
using namespace std;

int main() {
	const int SIZE = 20;
	int fibo[SIZE];
	int sum = 0;

	fibo[0] = 0;
	fibo[1] = 1;
	for (int i = 2; i < 20; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for (int i = 19; i >= 0; i--) {
		cout << i + 1 << "번째 항: " << fibo[i] << endl;
		sum += fibo[i];
	}
	cout << endl << "피보나치 수열의 1항부터 20항까지의 합은 " << sum << "입니다." << endl;
}