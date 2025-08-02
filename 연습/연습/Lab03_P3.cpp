#include <iostream>
using namespace std;

int main() {
	unsigned int time;
	unsigned int hour;
	unsigned int min;

	cout << "초 단위 시간을 양의 정수로 입력: ";
	cin >> time;
	hour = time / 3600;
	min = (time - hour * 3600) / 60;
	cout << endl << "입력된 초 단위 시간: " << time << endl;
	cout << "결과: " << hour << "시간 " << min << "분 " << time - hour * 3600 - min * 60 << "초" << endl;
	
	return 0;
}