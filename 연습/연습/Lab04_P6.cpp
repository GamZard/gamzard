#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int c;
	int result;

	cout << "이차방정식의 계수를 입력해주세요: ";
	cin >> a >> b >> c;
	cout << "실근의 개수: ";
	result = b*b - 4 * a * c;

	if (result > 0) {
		cout << "2개";
	}
	else if (result == 0) {
		cout << "1개";
	}
	else {
		cout << "0개";
	}

}