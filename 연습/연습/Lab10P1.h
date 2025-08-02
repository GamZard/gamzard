#pragma once
#include <iostream>

class Account {
private:
	int accNum;
	static int count;
	double balance;
public:
	Account(double balanace);
	~Account();
	void deposit(double amount);
	void withdraw(double amount);
};