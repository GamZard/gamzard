#include <iostream>
#include <ctime>
using namespace std;

int fiboL(int n);
int fiboR(int n);

int main() {
	int n;
	cout << "f(0)~f(?): ";
	cin >> n;

	clock_t start, end;
	start = clock();
	for (int counter = 0; counter <= n; ++counter) {
		fiboR(counter);
	}
	end = clock();
	cout << endl << "f(0)~f(" << n << ") fiboR time: " << end - start;

	start = clock();
	for (int counter = 0; counter <= n; ++counter) {
		fiboL(counter);
	}
	end = clock();
	cout << endl << "f(0)~f(" << n << ") fiboL time: " << end - start;
}

int fiboL(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	int result = 0, f1 = 1, f2 = 0;
	for (int i = 2; i <= n; i++) {
		result = f1 + f2;
		f2 = f1;
		f1 = result;
	}
	return result;
}

int fiboR(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fiboR(n - 1) + fiboR(n - 2);
	}
}