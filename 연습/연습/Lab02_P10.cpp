#include <iostream>
using namespace std;

int main() {
	int apple1;
	int apple2;
	cout << "철수가 가지고 있는 사과의 수를 입력하세요: ";
	cin >> apple1;
	cout << "영희가 가지고 있는 사과의 수를 입력하세요: ";
	cin >> apple2;
	cout << endl << "철수와 영희가 가지고 있는 사과의 총합은 " << apple1 + apple2 << "개 입니다." << endl;
	cout << "사과의 총 가격은 " << (apple1 + apple2) * 3000 << "원 입니다." << endl;
}