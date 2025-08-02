#include <iostream>
using namespace std;

class Vector {
private:
	int _x;
	int _y;
public:
	Vector(int x, int y);
	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;
	Vector add(const Vector& v) const;
	Vector subtract(const Vector& v) const;
	~Vector();
};

Vector::Vector(int x, int y)
	:_x{ x }, _y{ y } {
}
void Vector::setX(int x) {
	_x = x;
}
void Vector::setY(int y) {
	_y = y;
}
int Vector::getX() const {
	return _x;
}
int Vector::getY() const {
	return _y;
}
Vector Vector::add(const Vector& v) const{
	int x = _x + v._x;
	int y = _y + v._y;
	Vector result(x, y);
	return result;
}
Vector Vector::subtract(const Vector& v) const{
	int x = _x - v._x;
	int y = _y - v._y;
	Vector result(x, y);
	return result;
}
Vector::~Vector() {
	cout << "벡터 (" << _x << ", " << _y << ") 가 소멸되었습니다." << endl;
}

int main() {
	int x1, y1;
	int x2, y2;

	cout << "첫 번째 벡터를 입력하세요: ";
	cin >> x1 >> y1;
	Vector v1(x1, y1);
	cout << "벡터 (" << x1 << ", " << y1 << ") 가 생성되었습니다." << endl;

	cout << "두 번째 벡터를 입력하세요: ";
	cin >> x2 >> y2;
	Vector v2(x2, y2);
	cout << "벡터 (" << x2 << ", " << y2 << ") 가 생성되었습니다." << endl << endl;

	Vector v3 = v1.add(v2);
	Vector v4 = v1.subtract(v2);

	cout << "벡터 (" << v3.getX() << ", " << v3.getY() << ") 가 생성되었습니다." << endl;
	cout << "v1 + v2 = (" << v3.getX() << ", " << v3.getY() << ")" << endl << endl;

	cout << "벡터 (" << v4.getX() << ", " << v4.getY() << ") 가 생성되었습니다." << endl;
	cout << "v1 - v2 = (" << v4.getX() << ", " << v4.getY() << ")" << endl << endl;

} 