#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
	srand(time(0));
	int x1;
	int y1;
	int x2;
	int y2;
	double d;

	x1 = rand() % 201 - 100;
	y1 = rand() % 201 - 100;
	x2 = rand() % 201 - 100;
	y2 = rand() % 201 - 100;
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << "첫 번째 점 : (" << x1 << ", " << y1 << ")" << endl;
	cout << "두 번째 점 : (" << x2 << ", " << y2 << ")" << endl;
	cout << "두 점 사이의 거리 : " << d << endl;
}