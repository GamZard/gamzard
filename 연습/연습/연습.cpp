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
}

int main() {

}