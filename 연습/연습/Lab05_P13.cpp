#include <iostream>
using namespace std;

int main() {
	for (int i = 2; i < 10; i++) {
		for (int a = 1; a < 10; a++) {
			if (a % 3 == 0) {
				cout << i << "X" << a << "=" << i * a << " " << endl;
			}
			else {
				cout << i << "X" << a << "=" << i * a << " ";
			}
		}
		cout << endl;
	}
}