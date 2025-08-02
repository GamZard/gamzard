#include <iostream>
using namespace std;

int main() {
	int size;
	long long fact = 1;
	
	do {
		cout << "팩토리얼의 크기를 음수가 아닌 정수로 입력하세요: ";
		cin >> size;
	} while (size < 0);

	for (int i = size; i >= 1; i--) {
		fact = fact * i;
	}
	cout << endl << size << "! = " << fact << endl;
}