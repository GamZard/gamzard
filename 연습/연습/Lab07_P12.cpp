#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void game(int& sum, const int rnd);

int main() {
	srand(time(0));
	int rnd = 100 + rand() % 900;

	int sum = 0;
	game(sum, rnd);
	cout << "생성된 난수: " << sum << endl;
}

void game(int& sum, const int rnd) {
	int num;
	cout << "정수를 입력하세요: ";
	cin >> num;
	sum += num;

	if (rnd > sum) {
		cout << "up (sum: " << sum << ")" << endl << endl;
	}
	else if (rnd < sum) {
		cout << "down (sum: " << sum << ")" << endl << endl;
	}
	else
		return;
	game(sum, rnd);

}