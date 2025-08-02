#include <iostream>
using namespace std;

int function(int f, int n, int multi = 1);
int main() {
	int f1;
	int n;

	cout << "함수를 입력해 주세요: ";
	cin >> f1;
	cout << "x값을 입력해 주세요: ";
	cin >> n;
	cout << "함수값은 " << function(f1, n) << "입니다." << endl;
}

int function(int f, int n, int multi) {
	if (f == 0) {
		return 0;
	}
	return (f % 10) * multi + function(f / 10, n, multi * n);
}