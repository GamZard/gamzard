#include <iostream>
using namespace std;

int main() {
	int day;
	int n;
	int result;

	cout << "현재 요일을 입력하세요 (1: 월요일, 2: 화요일, ..., 7: 일요알): ";
	cin >> day;
	cout << "일 수를 입력하세요: ";
	cin >> n;

	result = (day + n) % 7;

	switch (result) {
	case 1:
		cout << "월요일" << endl;
		break;
	case 2:
		cout << "화요일" << endl;
		break;
	case 3:
		cout << "수요일" << endl;
		break;
	case 4:
		cout << "목요일" << endl;
		break;
	case 5:
		cout << "금요일" << endl;
		break;
	case 6:
		cout << "토요일" << endl;
		break;
	case 0:
		cout << "일요일" << endl;
		break;
	}
}