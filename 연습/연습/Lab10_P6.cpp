#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int arr[SIZE];
	int size;
	
	cout << "숫자들의 개수를 입력해주세요: ";
	cin >> size;
	cout << size << "개의 숫자들을 입력해 주세요: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	cout << endl << "입력받은 숫자들 중 3의 배수들은 다음과 같습니다: ";
	for (int i = 0; i < size; i++) {
		if (arr[i] % 3 == 0) {
			cout << arr[i] << " ";
		}
	}
	
}