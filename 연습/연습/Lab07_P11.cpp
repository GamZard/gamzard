#include <iostream>
using namespace std;

int change(int n, int multi = 1);

int main() {
	int ntwo;
	cout << "이진수를 입력하세요: ";
	cin >> ntwo;
	cout << ntwo << "의 십진수 표현: " << change(ntwo);

}

int change(int n,int multi) {
	if (n == 0) {
		return 0;
	}
	return (n % 10) * multi + change(n / 10, multi * 2);
}