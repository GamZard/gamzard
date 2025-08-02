#include <iostream>
#include <cmath>
using namespace std;

class Qfunc {
private:
	int n1;
	int n2;
	int n3;
public:
	Qfunc(int num1, int num2, int num3);
	int num1() const;
	int num2() const;
	int num3() const;
	void print() const;
	void result() const;
};

Qfunc::Qfunc(int num1, int num2, int num3)
	:n1{ num1 }, n2{ num2 }, n3{ num3 } {
}
int Qfunc::num1() const {
	return n1;
}
int Qfunc::num2() const {
	return n2;
}
int Qfunc::num3() const {
	return n3;
}
void Qfunc::print() const {
	cout << n1 << "x^2 + " << n2 << "x + " << n3;
}
void Qfunc::result() const {
	if (n2 * n2 == 4 * n1 * n3) {
		cout << "의 근은 " << -n2 / (2.0 * n1) << "입니다." << endl;
	}
	else if (n2 * n2 < 4 * n1 * n3) {
		cout << "의 근이 존재하지 않습니다." << endl;
	}
	else {
		cout << "의 근은 " << ((-n2 - sqrt(n2 * n2 - (4.0 * n1 * n3))) / (2.0 * n1));
		cout << "와(과) " << ((-n2 + sqrt(n2 * n2 - (4.0 * n1 * n3))) / (2.0 * n1));
		cout << "입니다." << endl;
	}
}

int main() {
	int num1, num2, num3;

	cout << "이차함수 1의 계수들을 입력해주세요: ";
	cin >> num1 >> num2 >> num3;
	Qfunc f1(num1, num2, num3);
	cout << "이차함수 2의 계수들을 입력해주세요: ";
	cin >> num1 >> num2 >> num3;
	Qfunc f2(num1, num2, num3);
	Qfunc f3(f1.num1() + f2.num1(), f1.num2() + f2.num2(), f1.num3() + f2.num3());

	cout << endl << "함수1: ";
	f1.print();
	f1.result();

	cout << "함수2: ";
	f2.print();
	f2.result();

	cout << "함수3: ";
	f3.print();
	f3.result();
}