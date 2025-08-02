#include <iostream>
#include <string>
using namespace std;

class Car {
private:
	int speed = 0;
public:
	int getspeed() const;
	void accelerate();
	void decelerate();

};

int Car::getspeed() const {
	return speed;
}
void Car::accelerate() {
	speed += 10;
}
void Car::decelerate() {
	if (speed >= 10) {
		speed -= 10;
	}
}


int main() {
	Car c;
	string set;
	cout << "명령을 입력하세요 (accelerate, decelerate, speed): ";
	while (cin >> set && set != "-1") {
		if (set == "accelerate") {
			c.accelerate();
		}
		else if (set == "decelerate") {
			c.decelerate();
		}
		else if(set == "speed") {
			cout << "현재 속도: " << c.getspeed() << "km/h" << endl;
		}
		else {
			cout << "잘못된 명령입니다." << endl;
		}
		cout << "명령을 입력하세요 (accelerate, decelerate, speed): ";
	}
}
