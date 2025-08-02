#include <iostream>
using namespace std;

int gcd(int d1,int d2);
int lcm(int n1,int n2);

int main() {
	int num1, dnum1;
	int num2, dnum2;
	int n;
	int numerator;
	int denomenator;
	
	cout << "Input numerator1: ";
	cin >> num1;
	cout << "Input denomenator1: ";
	cin >> dnum1;
	cout << "Input numerator2: ";
	cin >> num2;
	cout << "Input denomenator2: ";
	cin >> dnum2;

	cout << endl << "fraction1 = " << num1 << "/" << dnum1;
	cout << endl << "fraction2 = " << num2 << "/" << dnum2;

	n = gcd(dnum1, dnum2);
	numerator = (num1 * dnum2 + num2 * dnum1) / n;
	denomenator = lcm(dnum1, dnum2);
	cout << endl << "fraction1 + fraction2 = " << numerator << "/" << denomenator;
	cout << " = " << numerator / gcd(numerator, denomenator) << "/" << denomenator / gcd(numerator, denomenator) << endl;
}

int gcd(int d1, int d2) {
	if (d2 == 0) {
		return d1;
	}
	return gcd(d2, d1 % d2);
}

int lcm(int n1, int n2) {
	return n1 * n2 / gcd(n1, n2);
}