#include <iostream>
using namespace std;

class Circle {
private:
	int _radius;
	static int num;
public:
	Circle(int radius);
	Circle(const Circle& origin);
	int getRadius() const;
	double getCircum() const;
	double getArea() const;
	void getInfor() const;
	static int circleN();
};

int Circle::num{ 0 };
Circle::Circle(int radius)
	:_radius{ radius } {
	cout << "반지름 " << _radius << " 원 생성" << endl;
	num++;
}
Circle::Circle(const Circle& origin)
	:_radius{ origin._radius } {
	cout << "반지름 " << origin._radius << " 원 복사 생성" << endl;
	num++;
}
int Circle::getRadius() const{
	return _radius;
}
double Circle::getCircum() const{
	return (_radius * 2 * 3.14);
}
double Circle::getArea() const{
	return (_radius * _radius * 3.14);
}
void Circle::getInfor() const {
	cout << "반지름: " << getRadius() << endl;
	cout << "원주: " << getCircum() << endl;
	cout << "넓이: " << getArea() << endl;
}
int Circle::circleN() {
	return num;
}

int main() {
	cout << "원의 개수: " << Circle::circleN() << endl;
	cout << endl;

	Circle c1(13);
	Circle c2(31);
	Circle c3(c1);

	cout << endl;
	cout << "원의 개수: " << Circle::circleN() << endl;
	cout << endl;
	cout << "원 1의 정보" << endl;
	c1.getInfor();
	cout << endl;
	cout << "원 2의 정보" << endl;
	c2.getInfor();
	cout << endl;
	cout << "원 3의 정보" << endl;
	c3.getInfor();
}