#include <iostream>
#include <string>
using namespace std;

class Score {
private:
	string name;
	int win, draw, lose;
public:
	Score(string n, int w, int d, int l);
	void printRecords() const;
	double getPoint() const;
	string getName() const;
};

Score::Score(string n, int w, int d, int l)
	:name{ n }, win{ w }, draw{ d }, lose{ l } {
}
void Score::printRecords() const {
	cout << endl << "이름: " << name;
	cout << endl << "역대 전적: " << win << "승 " << draw << "무 " << lose << "패";
	cout << endl;
}
double Score::getPoint() const {
	return (win + (draw * 0.5));
}
string Score::getName() const {
	return name;
}

int main() {
	string n;
	int w, d, l;

	cout << "이름을 입력해 주세요: ";
	cin >> n;
	cout << "승리 경기 수를 입력해 주세요: ";
	cin >> w;
	cout << "무승부 경기 수를 입력해 주세요: ";
	cin >> d;
	cout << "패배 경기 수를 입력해 주세요: ";
	cin >> l;
	Score s1(n, w, d, l);

	cout << endl << "이름을 입력해 주세요: ";
	cin >> n;
	cout << "승리 경기 수를 입력해 주세요: ";
	cin >> w;
	cout << "무승부 경기 수를 입력해 주세요: ";
	cin >> d;
	cout << "패배 경기 수를 입력해 주세요: ";
	cin >> l;
	Score s2(n, w, d, l);

	s1.printRecords();
	cout << "승점: " << s1.getPoint() << "점" << endl;
	s2.printRecords();
	cout << "승점: " << s2.getPoint() << "점" << endl;

	if (s1.getPoint() > s2.getPoint()) {
		cout << endl << s1.getName() << "선수의 승점이 " << s2.getName() << "선수의 승점보다 높습니다." << endl;
	}
	else if (s2.getPoint() > s1.getPoint()) {
		cout << endl << s2.getName() << "선수의 승점이 " << s1.getName() << "선수의 승점보다 높습니다." << endl;
	}
	else {
		cout << endl << s1.getName() << "선수의 승점과 " << s2.getName() << "선수의 승점이 같습니다." << endl;
	}
}