#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point();
	Point(int x, int y);
	int getX() const;
	int getY() const;
	void setPoint(int x, int y);
};

Point::Point() {
}
Point::Point(int x, int y) 
	: x{ x }, y{ y } {
}
int Point::getX() const {
	return x;
}
int Point::getY() const {
	return y;
}
void Point::setPoint(int x, int y) {
	this->x = x;
	this->y = y;
}

double dis(const Point& p1, const Point& p2) {
	return sqrt(pow(p1.getX() - p2.getX(), 2) + pow(p1.getY() - p2.getY(), 2));
}

int main() {
	int x, y;
	Point p[5];
	for (int i = 0; i < 5; i++) {
		cout << i << "번 점의 좌표를 입력해 주세요: ";
		cin >> x >> y;
		p[i].setPoint(x, y);
	}
	cout << endl << "비교할 두 점의 인덱스를 각각 입력해 주세요: ";
	int d1, d2;
	cin >> d1 >> d2;
	cout << endl << "두 점 사이의 거리는 " << dis(p[d1], p[d2]) << "입니다.";
	cout << endl;
}