#include <iostream>
using namespace std;

int main() {
	int N;
	int M;
	int max = 0;
	cout << "N과 M을 입력해 주세요: ";
	cin >> N >> M;
	for (int i = 1; i < M; i++) {
		if (N % i == 0 && M % i == 0) {
			max = i;
		}
	}
	cout << N << ", " << M << "의 최대공약수 : ";
	cout << max;
}