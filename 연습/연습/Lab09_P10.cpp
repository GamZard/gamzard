#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	int _x;
	int _y;
public:
	Point(int x, int y);
	int getX() const;
	int getY() const;
};

class Line {
private:
	Point _p1;
	Point _p2;
public:
	Line(Point p1 = Point{ 0,0 }, Point p2 = Point{ 0,0 });
	double getLength() const;
};

Point::Point(int x, int y)
	:_x{ x }, _y{ y } {
	cout << "(" << _x << ", " << _y << ") 점이 생성되었습니다." << endl;
}
int Point::getX() const{
	return _x;
}
int Point::getY() const{
	return _y;
}

Line::Line(Point p1, Point p2)
	: _p1{ p1 }, _p2{ p2 } {
	cout << "(" << p1.getX() << ", " << p1.getY() << ")와 ";
	cout << "(" << p2.getX() << ", " << p2.getY() << ")를 이은 직선이 생성되었습니다." << endl;
}
double Line::getLength() const {
	return sqrt(pow((_p1.getX() - _p2.getX()), 2) + pow((_p1.getY() - _p2.getY()), 2));
}

int main() {
	int x1, x2;
	int y1, y2;

	cout << "첫 번째 점의 x좌표와 y좌표를 입력하세요: ";
	cin >> x1 >> y1;
	cout << "두 번째 점의 x좌표와 y좌표를 입력하세요: ";
	cin >> x2 >> y2;

	Point p1(x1, y1);
	Point p2(x2, y2);
	cout << endl;
	Line line(p1, p2);
	cout << "두 점 사이의 직선의 길이는 " << line.getLength() << "입니다." << endl;
}