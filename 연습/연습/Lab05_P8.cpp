#include <iostream>
using namespace std;

int main() {
	static int N;
	int num;

	do {
		cout << "자연수 N을 입력해 주세요: ";
		cin >> N;
	} while (N <= 0);

	cout << endl << N << "의 배수인지 확인할 숫자를 입력해 주세요 : ";

	while (cin >> num) {
		if (num > 0) {
			if (num % N == 0) {
				cout << num << "은(는) " << N << "의 배수입니다." << endl << endl;
			}
			else {
				cout << num << "은(는) " << N << "의 배수가 아닙니다." << endl << endl;
			}
		}
		cout << N << "의 배수인지 확인할 숫자를 입력해 주세요: ";
	}
}