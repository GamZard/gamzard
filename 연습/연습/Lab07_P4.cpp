#include <iostream>
using namespace std;

int power(int a, int b);

int main() {
	int down, pow;
	cout << "밑과 지수를 입력해 주세요 : ";
	cin >> down >> pow;
	cout << down << "의 " << pow << "제곱은 " << power(down, pow) << "입니다." << endl;
}

int power(int a, int b) {
	if (b == 0) {
		return 1;
	}
	return a * power(a, b - 1);
}