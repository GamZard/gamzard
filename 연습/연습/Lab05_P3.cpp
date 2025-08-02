#include <iostream>
using namespace std;

int main() {
	int down;
	int up;
	unsigned int power = 1, temp;
	bool overflow = false;

	do {
		cout << "밑을 양의 정수로 입력해주세요: ";
		cin >> down;
	} while (down <= 0);
	do {
		cout << "지수를 양의 정수로 입력하세요: ";
		cin >> up;
	} while (up <= 0);

	temp = power;
	int i = 0;
	for (; (i < up) && (!overflow); i++) {
		power = power * down;
		if (power / down != temp)
			overflow = true;
		temp = power;
		}

	cout << endl;
	if (overflow)
		cout << down << "^" << i << "에서 오버플로우가 발생했습니다." << endl;
	else {
		cout << down << "^" << up << " = " << power << endl;
	}
}