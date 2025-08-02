#include <iostream>
using namespace std;

int main() {
	int num1;
	int numH;
	int numT;
	int numO;
	cout << "세 자리 양의 정수 입력: ";
	cin >> num1;
	numH = num1 / 100;
	numT = (num1 - numH*100) / 10;
	numO = (num1 - numH * 100 - numT * 10);

	cout << endl << "입력한 정수 " << num1 << endl;
	cout << "백의 자리: " << numH << endl;
	cout << "십의 자리: " << numT << endl;
	cout << "일의 자리: " << numO << endl;

	return 0;
}