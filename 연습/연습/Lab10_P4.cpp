#include <iostream>
#include <ctime>
#include <cstdlib>	
using namespace std;

int main() {
	srand(time(0));
	int n;
	const int SIZE = 10;
	int arr[SIZE];

	for (int& r : arr) {
		r = 10 + rand() % 21;
	}
	cout << "10~30 숫자 입력: ";
	cin >> n;

	int index = 0;
	for (; index < SIZE; ++index) {
		if (arr[index] == n) {
			break;
		}
	}
	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	if (index < SIZE) {
		cout << endl << "The value was found at index: " << index << endl;
	}
	else {
		cout << endl << "The value was not found." << endl;
	}
}