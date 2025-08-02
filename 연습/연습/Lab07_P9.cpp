#include <iostream>
using namespace std;

void two(int n);

int main() {
	int n;
	cout << "양의 정수를 입력하세요: ";
	cin >> n;
	cout << n << "의 이진수 표현: ";
	two(n);
}

void two(int n) {
	if (n > 1)
		two(n / 2);
	cout << n % 2;
}