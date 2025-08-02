#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int arr[SIZE];
	int sum = 0;
	double average = 0;

	for (int& r : arr) {
		cin >> r;
	}
	int min = arr[0];
	int max = arr[0];


	for (int& r : arr) {
		sum += r;
		if (min > r) {
			min = r;
		}
		if (max < r) {
			max = r;
		}
	}
	average = sum / 10.0;

	cout << endl;
	cout << "합계: " << sum << endl;
	cout << "평균: " << average << endl;
	cout << "최솟값: " << min << endl;
	cout << "최댓값: " << max << endl;
}