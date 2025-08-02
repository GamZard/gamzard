#include <iostream>
using namespace std;

class Card {
private:
	int total = 0;
	int count = 0;
	int history[100];
public:
	void pay(int amount);
	void getInfo();
};

void Card::pay(int amount) {
	total += amount;
	history[count] = amount;
	count++;
}
void Card::getInfo() {
	std::cout << "결제 횟수: " << count << "회" << endl;
	std::cout << "결제 금액: " << total << endl;
	std::cout << "결제 내역" << endl;
	for (int i = 0; i < count; i++) {
		std::cout << history[i] << endl;
	}
}

int main() {
	int num;
	std::cout << "총 결제 횟수를 입력해 주세요: ";
	cin >> num;
	Card A;
	Card B;
	Card C;

	for (int n = 0; n < num; n++) {
		char card;
		int price;
		std::cout << "이용한 카드와 금액을 입력해 주세요: ";
		cin >> card >> price;
		if (card == 'A') {
			A.pay(price);
		}
		else if (card == 'B') {
			B.pay(price);
		}
		else {
			C.pay(price);
		}
	}

	std::cout << endl << "A 카드 정보" << endl;
	A.getInfo();
	std::cout << endl << "B 카드 정보" << endl;
	B.getInfo();
	std::cout << endl << "C 카드 정보" << endl;
	C.getInfo();
}