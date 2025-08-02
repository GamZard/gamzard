#include <iostream>
#include <string>
using namespace std;

int main() {
	int studentNum;
	string name;
	int age;

	cout << "학번을 입력하세요: ";
	cin >> studentNum;
	cout << "이름을 입력하세요: ";
	cin >> name;
	cout << "나이를 입력하세요: ";
	cin >> age;

	cout << endl << "안녕하세요, 저는 " << name << "입니다." << endl;
	cout << "제 학번은 " << studentNum << "이고, 나이는 " << age << "세입니다." << endl;
}