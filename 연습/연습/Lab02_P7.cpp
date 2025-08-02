#include <iostream>
using namespace std;

int main() {
	char first;
	char second;
	cout << "두 영문자를 입력해주세요: ";
	cin >> first >> second;
	cout << "두 문자사이에는 " << second - first -1 << "개의 문자가 존재합니다." << endl;
}