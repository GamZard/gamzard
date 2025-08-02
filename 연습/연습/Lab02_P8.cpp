#include <iostream>
using namespace std;

int main() {
	char small;
	cout << "소문자 알파벳을 입력하세요: ";
	cin >> small;

	char big = small - 32;
	cout << "대문자로 변환된 결과: " << big << endl;
}