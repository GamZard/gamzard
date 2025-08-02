#include <iostream>
using namespace std;

int main() {
	int num;
	int pp;
	cout << "쿠키의 개수를 입력하세요: ";
	cin >> num;
	cout << "친구의 수를 입력하세요: ";
	cin >> pp;
	cout << "남은 쿠키의 개수: ";
	cout << num % pp << endl;

	return 0;
}