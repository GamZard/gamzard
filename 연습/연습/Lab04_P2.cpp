#include <iostream>
using namespace std;

int main() {
	unsigned long income;
	unsigned long tax;
	cout << "수입을 입력하세요: ";
	cin >> income;

	if (income >= 100000000) {
		tax = income * 0.3;
	}
	else if (income < 100000000 && income >= 50000000) {
		tax = (10000000 / 10) + (40000000 / 5) + (income - 50000000) * 0.3;
	}
	else if (income < 50000000 && income >= 10000000) {
		tax = (10000000 / 10) + (income - 10000000) * 0.2;
	}
	else {
		tax = income * 0.1;
	}

	cout << endl << "수입 = \\" << income << endl;
	cout << "세금 = \\" << tax << endl;

	return 0;
}