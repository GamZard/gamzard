#include <iostream>
using namespace std;

class Rectangle {
private:
	double length;
	double height;
public:
	Rectangle();
	Rectangle(double l, double h);
	Rectangle(const Rectangle& origin);
	void setRectangle(double l, double h);
	void print() const;
	double getArea() const;
	double getPerimeter() const;
};
int main() {
	double length;
	double height;

	cout << "사각형1 가로: ";
	cin >> length;
	cout << "사각형1 세로: ";
	cin >> height;
	Rectangle rect1(length, height);
	cout << endl << "사각형1: ";
	rect1.print();
	cout << "넓이: " << rect1.getArea() << endl;
	cout << "둘레: " << rect1.getPerimeter() << endl << endl;

	cout << "사각형2 가로: ";
	cin >> length;
	cout << "사각형2 세로: ";
	cin >> height;
	Rectangle rect2;
	rect2.setRectangle(length, height);
	cout << endl << "사각형2: ";
	rect2.print();
	cout << "넓이: " << rect2.getArea() << endl;
	cout << "둘레: " << rect2.getPerimeter() << endl << endl;

	Rectangle rect3 = rect1;
	cout << "사각형3: ";
	rect3.print();
	cout << "넓이: " << rect3.getArea() << endl;
	cout << "둘레: " << rect3.getPerimeter() << endl;
}

Rectangle::Rectangle()
	:length{ 0 }, height{ 0 } {
}

Rectangle::Rectangle(double l, double h)
	:length{ 0 }, height{ 0 } {
	if (l <= 0 || h <= 0) {
		cout << "Recctangle 객체를 생성할 수 없습니다." << endl;
	}
	else {	
		length = l;
		height = h;
	}
}

Rectangle::Rectangle(const Rectangle& origin)
	:length{ origin.length }, height{ origin.height } {
}

void Rectangle::setRectangle(double l, double h) {
	if (l <= 0 || h <= 0) {
		cout << "Rectangle 객체를 생성할 수 없습니다." << endl;
	}
	else {
		length = l;
		height = h;
	}
}

void Rectangle::print() const {
	cout << length << " x " << height << endl;
}
double Rectangle::getArea() const {
	return length * height;
}
double Rectangle::getPerimeter() const {
	return 2 * (length + height);
}