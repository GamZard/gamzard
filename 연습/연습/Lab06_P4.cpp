#include <iostream>
#include <ctime>
using namespace std;

int main() {
	long etime = time(0);

	etime = etime / 86400;
	etime = etime % 7;
	switch(etime) {
	case 0:
		cout << "오늘은 금요일입니다." << endl;
		break;
	case 1:
		cout << "오늘은 토요일입니다." << endl;
		break;
	case 2:
		cout << "오늘은 일요일입니다." << endl;
		break;
	case 3:
		cout << "오늘은 월요일입니다." << endl;
		break;
	case 4:
		cout << "오늘은 화요일입니다." << endl;
		break;
	case 5:
		cout << "오늘은 수요일입니다." << endl;
		break;
	case 6:
		cout << "오늘은 목요일입니다." << endl;
		break;
	}
}
