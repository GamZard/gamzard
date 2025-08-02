#include <iostream>
#include <ctime>
using namespace std;

int game(int a, int b);
int main() {
	int N;
	int pointA = 0;
	int pointB = 0;
	int count = 1;
	int startTime = time(0);

	cout << "이겨야 하는 판수를 입력해주세요: ";
	cin >> N;
	cout << "A와 B의 선택을 입력하세요(가위: 1. 바위: 2, 보: 3)." << endl;

	do {
		int a;
		int b;
		cout << count << "번째 판입니다 : ";
		cin >> a >> b;
		switch (game(a, b)) {
		case 0:
			cout << "비겼습니다. 현재 점수는 A " << pointA << ":";
			cout << pointB << " " << "B 입니다." << endl;
			count++;
			break;
		case 1:
			pointA++;
			cout << "A가 이겼습니다. 현재 점수는 A " << pointA << ":";
			cout << pointB << " " << "B 입니다." << endl;
			count++;
			break;
		case 2:
			pointB++;
			cout << "B가 이겼습니다. 현재 점수는 A " << pointA << ":";
			cout << pointB << " " << "B 입니다." << endl;
			count++;
			break;
		}
	} while (pointA != N && pointB != N);
	if (pointA > pointB) {
		cout << endl << "최종 승자는 A입니다. 게임을 진행한 시간은 ";
	}
	else {
		cout << endl << "최종 승자는 B입니다. 게임을 진행한 시간은 ";
	}
	cout << time(0) - startTime << "초 입니다.";
}

int game(int a, int b) {
	if (b - a == 1) {
		return 2;
	}
	else if (b == 1 && a == 3) {
		return 2;
	}
	else if (b == a) {
		return 0;
	}
	else {
		return 1;
	}
}