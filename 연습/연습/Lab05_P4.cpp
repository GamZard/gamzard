#include <iostream>
using namespace std;

int main() {
	int size;
	int num;
	int min;
	int max;

	do {
		cout << "정수의 개수를 양의 정수로 입력하세요: ";
		cin >> size;
	} while (size <= 0);
	cout << endl << "정수를 입력하세요: ";
	cin >> num;
	min = num;
	max = num;
	for (int i = 0; i < size-1; i++) {
		cout << "정수를 입력하세요: ";
		cin >> num;
		if (num < min) {
			min = num;
		}
		if (num > max) {
			max = num;
		}
	}

	cout << endl << "최솟값 = " << min << endl;
	cout << "최댓값 = " << max << endl;
}