#include <iostream>
#include <ctime>
using namespace std;

int main() {
	srand(time(0));
	int r1, r2, r3;
	int num1, num2, num3;
	int same = 0;
	
	r1 = 1 + rand() % 10;
	r2 = 1 + rand() % 10;
	r3 = 1 + rand() % 10;
	cout << "세 개의 번호를 선택하세요(1~10): ";
	cin >> num1 >> num2 >> num3;
	if (num1 == r1) {
		same++;
	}
	if (num2 == r2) {
		same++;
	}
	if (num3 == r3) {
		same++;
	}

	cout << "당첨 번호: " << r1 << " " << r2 << " " << r3 << endl;
	cout << "선택 번호: " << num1 << " " << num2 << " " << num3 << endl;
	if (same == 3) {
		cout << "축하합니다. 모두 일치!" << endl;
	}
	else if (same == 0) {
		cout << "꽝..." << endl;
	}
	else {
		cout << same << "개 일치" << endl;
	}
}