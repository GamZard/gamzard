#include <iostream>
using namespace std;

int main() {
	double rightLeft;
	double upDown;
	double rightS;
	cout << "모니터의 화면 비율을 입력해 주세요: ";
	cin >> rightLeft >> upDown;
	cout << "화면의 가로 길이를 입력해 주세요: ";
	cin >> rightS;

	cout << "세로 길이: " << upDown / rightLeft * rightS << endl;

	return 0;
}