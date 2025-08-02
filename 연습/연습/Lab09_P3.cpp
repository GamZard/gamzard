#include <iostream>
using namespace std;

class Visitors {
private:
	int visitor;
public:
	Visitors();
	void add(int v);
	~Visitors();
};

Visitors::Visitors()
	: visitor{ 0 } {
}

void Visitors::add(int v) {
	if (v < 0) {
		return;
	}
	visitor += v;
}

Visitors::~Visitors() {
	cout << "오늘의 입장객 수는 " << visitor << "명 입니다." << endl;
}

int main() {
	int n;
	Visitors visit;

	cout << "입장한 사람 수를 입력해 주세요: ";
	while (cin >> n) {
		visit.add(n);
		cout << endl << "입장한 사람 수를 입력해 주세요(영업 종료시 EOF): ";
	}
}