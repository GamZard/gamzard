#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int rollDice();

int main() {
	srand(time(0));
	int sumDice;
	sumDice = rollDice();
	int score;
	bool re = false;
	
	score = sumDice;
	switch (sumDice) {
	case 7:
		cout << endl << "Player wins" << endl;
		break;
	case 11:
		cout << endl << "Player wins" << endl;
		break;
	case 2:
		cout << endl << "Player loses" << endl;
		break;
	case 3:
		cout << endl << "Player loses" << endl;
		break;
	case 12:
		cout << endl << "Player loses" << endl;
		break;
	default:
		cout << endl << "Point is " << sumDice << endl;
		re = true;
		break;
	}

	while (re == true) {
		sumDice = rollDice();
		if (sumDice == 7) {
			cout << endl << "Player loses" << endl;
			re = false;
		}
		if (sumDice == score) {
			cout << endl << "Player wins" << endl;
			re = false;
		}
	}
}

	int rollDice() {
		int num1;
		int num2;
		int sum;

		num1 = (1 + rand() % 6);
		num2 = (1 + rand() % 6);
		sum = num1 + num2;
		cout << "Player rolled " << num1 << " + " << num2 << " = " << sum << endl;
		return sum;
	}