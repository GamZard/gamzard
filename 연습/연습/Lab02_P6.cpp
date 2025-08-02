#include <iostream>
#include <string>
using namespace std;

int main() {
	string name;
	int age;
	double rightSight;
	double leftSight;
	bool glass;

	cout << "이름을 입력해주세요: ";
	cin >> name;
	cout << "나이를 입력해주세요: ";
	cin >> age;
	cout << "왼쪽 시력을 입력해주세요: ";
	cin >> leftSight;
	cout << "오른쪽 시력을 입력해주세요: ";
	cin >> rightSight;
	cout << "안경 착용여부를 입력해주세요(True: 1/ False: 0): ";
	cin >> glass;

	cout << endl << "이름: " << name;
	cout << endl << "나이: " << age;
	cout << endl << "왼쪽 시력: " << leftSight;
	cout << endl << "오른쪽 시력: " << rightSight;
	cout << endl << "안경 착용여부: " << glass;
}