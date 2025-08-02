#include <iostream>	
#include <iomanip>
using namespace std;

int main() {
	int n;
	cout << "숫자의 개수를 음수가 아닌 정수로 입력하세요: ";
	cin >> n;
	while ( n < 0) {
		cout << "숫자의 개수를 음수가 아닌 정수로 입력하세요: ";
		cin >> n;
	}
	
	
	double sum = 0;
	double rate = 1;
	double num = 0;
	int count = 0;
	while (count < n) {
		cout << "숫자를 입력하세요: ";
		cin >> num;
		sum += num;
		rate = rate * num;
		count++;
	}
	cout << endl << "합 = " << fixed << setprecision(2) << sum << endl;
	cout << "곱 = " << fixed << setprecision(2) << rate << endl;

	return 0;
}
