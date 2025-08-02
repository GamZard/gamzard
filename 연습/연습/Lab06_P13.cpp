#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int rollDice();

int main() {
	long day;
	int sum;

	cout << "오늘의 날짜를 입력하세요: ";
	cin >> day;
	srand(day);
	sum = rollDice();

	if (sum == 12) {
		cout << "Lucky!!" << endl;
	}
	else {
		cout << "Unlucky..." << endl;
	} 

}

int rollDice() {
	int dice1;
	int dice2;
	int sum;
	
	dice1 = 1 + rand() % 6;
	dice2 = 1 + rand() % 6;
	sum = dice1 + dice2;
	cout << endl << "Dice 1: " << dice1;
	cout << endl << "Dice 2: " << dice2 << endl;
	return sum;
}