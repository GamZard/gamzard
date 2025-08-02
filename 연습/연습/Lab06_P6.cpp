#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

double getRadius(double a);

int main() {
	double a;
	double r;
	double square;

	cout << "원의 넓이를 입력하시오 : ";
	cin >> a;
	r = getRadius(a);
	square = 4 * r * r;
	cout << "원에 외접하는 정사각형의 넓이: " << fixed << setprecision(3) << square << endl;
}

double getRadius(double a) {
	double r;
	double pi = 3.14;
	r = sqrt(a / pi);
	return r;
}