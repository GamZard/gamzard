#include <iostream>
#include "Lab10P1.h"
using namespace std;

int Account::count = 100000;
Account::Account(double balance)
	:balance{ balance } {
	count++;
	accNum = count;
	cout << accNum << " 계좌 생성" << endl;
	cout << "잔액: " << this->balance << endl << endl;
}
Account::~Account() {
	cout << accNum << " 계좌 삭제" << endl;
}
void Account::deposit(double amount) {
	cout << "계좌: " << accNum << endl;
	cout << "입금: " << amount << endl;
	if (amount > 0) {
		balance += amount;
	}
	else {
		cout << "입금 취소" << endl;
	}
	cout << "잔액: " << balance << endl << endl;
}
void Account::withdraw(double amount) {
	cout << "계좌: " << accNum << endl;
	cout << "출금: " << amount << endl;
	if (amount > balance) {
		cout << "출금 취소" << endl;
	}
	else {
		balance -= amount;
	}
	cout << "잔액: " << balance << endl << endl;
}