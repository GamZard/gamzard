#include <iostream>
using namespace std;

int maximum(int x, int y, int z);

int main() {
	int num1, num2, num3;
	int max;

	cout << "Enter three integer values: ";
	cin >> num1 >> num2 >> num3;
	
	cout << "The maximum integer value is: " << maximum(num1, num2, num3);

}

int maximum(int x, int y, int z) {
	int max = x;

	if (y > max) {
		max = y;
	}
	if (z > max) {
		max = z;
	}
	return max;
}