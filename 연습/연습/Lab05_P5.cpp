#include <iostream>
using namespace std;

int main() {
	int n;
	int num;

	cout << "정수의 개수를 양의 정수로 입력하세요: ";
	cin >> n;
	while (n <= 0) {
		cout << "양의 정수를 입력하세요: ";
		cin >> n;
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << "정수를 입력해주세요: ";
		cin >> num;
		if (num % 7 == 0) {
			cout << endl << num << "은/는 7로 나눌 수 있습니다." << endl;
			break;
		}
	}
	if (num % 7 != 0) {
		cout << endl << "7로 나눌 수 있는 숫자가 없습니다." << endl;
	}

	return 0;
}