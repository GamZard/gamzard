#include <iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int height;
public:
	Rectangle();
	Rectangle(int l, int h);
	Rectangle(const Rectangle&);
	int getL();
	int getH();
	void setL(int l);
	void setH(int h);
	void printRec();
	int getArea();
};

Rectangle::Rectangle()
	:length{ 0 }, height{ 0 } {
}
Rectangle::Rectangle(int l, int h)
	:length{ l }, height{ h } {
}
Rectangle::Rectangle(const Rectangle& origin)
	:length{ origin.length }, height{ origin.height } {
}
int Rectangle::getL() {
	return length;
}
int Rectangle::getH() {
	return height;
}
void Rectangle::setL(int l) {
	length = l;
}
void Rectangle::setH(int h) {
	height = h;
}
void Rectangle::printRec() {
	cout << "가로: " << length << endl;
	cout << "세로: " << height << endl;
}
int Rectangle::getArea() {
	return (length * height);
}

int main() {
	int l, h;

	cout << "Rectangle 1의 가로와 세로 길이를 입력해 주세요: ";
	cin >> l >> h;
	Rectangle rec1{ l,h };
	Rectangle rec2{ rec1 };
	cout << "복사된 사각형- 가로:" << rec2.getL() << " 세로:" << rec2.getH() << endl;

	cout << endl << "Rectangle 1의 정보" << endl;
	rec1.printRec();
	cout << "넓이: " << rec1.getArea() << endl;

	rec2.setL(31);
	cout << endl << "Rectangle 2의 정보" << endl;
	rec2.printRec();
	cout << "넓이: " << rec2.getArea() << endl;

	Rectangle rec3{ rec1.getL() * 2, rec1.getH() * 3 };
	cout << endl << "Rectangle 3의 정보" << endl;
	rec3.printRec();
	cout << "넓이: " << rec3.getArea() << endl;
}