#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N;
	int rise;
	double sum = 1.0;

	cout << "N값과 1년간 물가상승률(%)을 입력해 주세요: ";
	cin >> N >> rise;
	for (int i = 0; i < N; i++) {
		sum = sum + sum * (static_cast<double>(rise) / 100);
	}
	cout << N << "년뒤 물가: 현재 물가의 " << fixed << setprecision(3) << sum << "배" << endl;
}