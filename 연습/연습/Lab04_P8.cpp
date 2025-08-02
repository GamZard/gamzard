#include <iostream>
using namespace std;

int main() {
	int income;
	const double tax = 0.107;
	int total;

	cout << "연봉을 입력하세요: ";
	cin >> income;
	total = static_cast<double>(income) * tax;
	cout << "실수령 월급: \\" << (income - total) / 12 << endl;
}