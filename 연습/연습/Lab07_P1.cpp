#include <iostream>
#include <ctime>
using namespace std;

int factorialR(int number);
int factorialL(int number);

int main() {
	clock_t start, end;
	start = clock();
	for (int counter{ 0 }; counter <= 3000; ++counter) {
		factorialR(counter);
		end = clock();
	}
	cout << "factorialR time: " << end - start << endl << endl;

	start = clock();
	for (int counter{ 0 }; counter <= 3000; ++counter) {
		factorialL(counter);
		end = clock();
	}
	cout << "factorialL time: " << end - start << endl << endl;
}

int factorialR(int number) {
	if (number <= 1) {
		return 1;
	}
	else {
		return number * factorialR(number - 1);
	}

}

int factorialL(int number) {
	if (number <= 0) {
		return 1;
	}
	int result = 1;
	for (int i = 2; i <= number; i++) {
		result = result * i;
	}
	return result;
}