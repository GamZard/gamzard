#include <iostream>
#include <string>
#include <stack>

using namespace std;


struct oper {
	int pri;
	string o;
};
stack<int> num;
stack<oper> op;

void calc() {
	int a, b, result;

	b = num.top();
	num.pop();
	a = num.top();
	num.pop();
	string oper = op.top().o;
	op.pop();

	if (oper == "+") {
		result = a + b;
	} else if (oper == "-") {
		result = a - b;
	} else if (oper == "*") {
		result = a * b;
	} else if (oper == "/") {
		if (b == 0) {
			cout << "0으로 나눌 수 없습니다." << endl;
			result = 0;
		} else {
			result = a / b;
		}
	} else {
		cout << "알 수 없는 연산자입니다: " << oper << endl;
		result = 0;
	}

	num.push(result);
}

int main() {

}