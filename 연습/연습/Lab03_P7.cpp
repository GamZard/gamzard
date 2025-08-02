#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int a;
	int b;
	cout << "두 정수를 16진수로 입력해주세요: ";
	cin >> hex >> a >> b;
	cout << "a + b = " << hex << a + b << endl;
	cout << "a * b = " << hex << a * b << endl;
	cout << "a / b = " << hex << a / b << endl;
}