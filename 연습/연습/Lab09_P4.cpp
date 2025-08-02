#include <iostream>
using namespace std;

class Stats {
private:
	int min;
	int max;
	int size;
	int total;
public:
	Stats();
	void addNumber(int num);
	int getMin();
	int getMax();
	int getTotal();
	double getAverage();
};

Stats::Stats()
	: min{ 0 }, max{ 0 }, size{ 0 }, total{ 0 } {
}
void Stats::addNumber(int num) {
	if (num > -10 && num < 10) {
		return;
	}
	if (size == 0) {
		min = num, max = num;
	}
	if (max < num) {
		max = num;
	}
	if (min > num) {
		min = num;
	}
	total += num;
	size++;
}
int Stats::getMin() {
	return min;
}
int Stats::getMax() {
	return max;
}
int Stats::getTotal() {
	return total;
}
double Stats::getAverage() {
	return (static_cast<double>(total) / size);
}

int main() {
	int size;
	Stats s;

	cout << "숫자의 개수를 입력해 주세요: ";
	cin >> size;
	for (int i = 1; i <= size; i++) {
		int x;
		cout << i << "번째 숫자를 입력해 주세요: "; 
		cin >> x;
		s.addNumber(x);
	}
	cout << endl << "최솟값: " << s.getMin();
	cout << endl << "최댓값: " << s.getMax();
	cout << endl << "총합: " << s.getTotal();
	cout << endl << "평균: " << s.getAverage() << endl;
}