#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "양의 정수를 입력하세요(종료는 -1): ";
	
	int result;
	while (cin >> num && num != -1 ) {
		result = 0;
		while (num != 0) {
			result = result * 10;
			result = result + (num % 10);
			num = num / 10;
		}
		cout << "뒤집은 결과: " << result << endl;
		cout << "다음 양의 정수를 입력하세요(종료는 -1): ";
	}
}