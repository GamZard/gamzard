#include <iostream>
#include <cmath>
using namespace std;

void div2num(int& a, int& b, int N);
int GDF(int a,int b);

int main() {
	int a;
	int b;
	int N;

	cout << "분자와 분모를 입력하세요: ";
	cin >> a >> b;
	N = GDF(abs(a), abs(b));	
	div2num(a, b, N * (abs(b) / b));
}

void div2num(int& a, int& b, int N) {
	cout << "기약분수: " << a / N << "/" << b / N;
}

int GDF(int a, int b) {
	for (int i = a; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}