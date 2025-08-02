#include <iostream>
#include <ctime>
using namespace std;

class Time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	Time(int hours, int minutes, int seconds);
	void print() const;
	void tick();
	void normal();
};
int main() {
	int hours;
	int minutes;
	int seconds;

	unsigned int t = time(0) + 9 * 3600;
	hours = t / 3600 % 24;
	minutes = t % 3600 / 60;
	seconds = t % 60;
	Time time{ hours, minutes, seconds };

	cout << "현제 시간: ";
	time.print();

	cout << "100000초 지나면: ";
	for (int i = 0; i < 100000; i++) {
		time.tick();
	}
	time.print();
}

Time::Time(int h, int m, int s)
	:hours{ h }, minutes{ m }, seconds{ s } {
}
void Time::print() const {
	cout << hours << ":" << minutes << ":" << seconds << endl;
}
void Time::tick() {
	seconds++;
	normal();
}
void Time::normal() {
	if (seconds > 59) {
		seconds = 0;
		minutes += 1;
	}
	if (minutes > 59) {
		minutes = 0;
		hours += 1;
	}
	if (hours > 23) {
		hours = 0;
	}
}