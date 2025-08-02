#include <iostream>
using namespace std;

int main() {
	int num;
	int people;

	cout << "사과의 개수를 입력해주세요: ";
	cin >> num;
	cout << "사람의 수를 입력해주세요: ";
	cin >> people;

	cout << "모든 사람은 최소 " << num / people << "개의 사과를 가져갈 수 있습니다." << endl;
	return 0;
}