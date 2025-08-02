#include <iostream>
using namespace std;

int main() {
	unsigned int plus;
	int minus;
	cout << "양수를 입력하세요: ";
	cin >> plus;
	cout << "음수를 입력하세요: ";
	cin >> minus;
	cout << plus << " + " << minus << " = " << plus + minus;
}