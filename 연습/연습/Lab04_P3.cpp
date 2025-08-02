#include <iostream>

int main() {
	int year;
	int month;
	int day;
	int total = 0;

	std::cout << "몇 년인지 입력하세요: ";
	std::cin >> year;
	std::cout << "몇 월인지 입력하세요: ";
	std::cin >> month;
	std::cout << "며칠인지 입력하세요: ";
	std::cin >> day;

	bool leap = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
	int m1 = 31;
	int m2 = leap ? 29 : 28;
	int m3 = 31;
	int m4 = 30;
	int m5 = 31;
	int m6 = 30;
	int m7 = 31;
	int m8 = 31;
	int m9 = 30;
	int m10 = 31;
	int m11 = 30;

	switch (month) {
	case 12:
		total += m11;
	case 11:
		total += m10;
	case 10:
		total += m9;
	case 9:
		total += m8;
	case 8:
		total += m7;
	case 7:
		total += m6;
	case 6:
		total += m5;
	case 5:
		total += m4;
	case 4:
		total += m3;
	case 3:
		total += m2;
	case 2:
		total += m1;
	case 1:
		total += 0;
	}

	total += day;

	std::cout << std::endl << "올해의 " << total << "번째 날입니다." << std::endl;
}