#include <iostream>
using namespace std;

class Rectangle {
private:
	double length;
	double height;
	static int count;
public:
	Rectangle();
	Rectangle(double l, double h);
	double getL() const;
	double getH() const;
	double area() const;
	double peri() const;
	static int getCount();
};

int Rectangle::count{ 0 };
Rectangle::Rectangle() 
	:length{ 0 }, height{ 0 } {
}
Rectangle::Rectangle(double l, double h)
	:length{ l }, height{ h } {
	count++;
}
double Rectangle::getL() const{
	return length;
}
double Rectangle::getH() const{
	return height;
}
double Rectangle::area() const{
	return (length * height);
}
double Rectangle::peri() const{
	return ((length + height) * 2);
}
int Rectangle::getCount() {
	return count;
}

void printRectangles(const Rectangle rects[]) {
	cout << endl << "사각형의 총 개수: " << Rectangle::getCount() << endl;
	for (int i = 0; i < Rectangle::getCount(); i++) {
		cout << "사각형 " << i + 1 << ": 가로=" << rects[i].getL();
		cout << ", 세로=" << rects[i].getH() << ", 면적=" << rects[i].area();
		cout << ", 둘레=" << rects[i].peri() << endl;
	}
}

int main() {
	const int MAX = 100;
	Rectangle rects[MAX];
	double length;
	double height;

	cout << "사각형을 가로와 세로를 입력하세요 (종료: 0)." << endl;
	while (Rectangle::getCount() < MAX) {
		cin >> length;
		if (length == 0) {
			break;
		}
		cin >> height;
		if (height == 0) {
			break;
		}
		rects[Rectangle::getCount()- 1] = Rectangle(length, height);
	}
	printRectangles(rects);
}