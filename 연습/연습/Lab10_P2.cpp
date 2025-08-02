#include <iostream>
using namespace std;

int main() {
	const int  SIZE = 10;
	int arr[SIZE];
	int size;
	
	cout << "크기를 입력하세요(1~10) : ";
	cin >> size;
	cout << endl;

	cout << size << "개의 숫자를 입력하세요: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	cout << "입력한 숫자들을 거꾸로 출력: ";
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;
}