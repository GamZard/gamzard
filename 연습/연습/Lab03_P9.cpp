#include <iostream>
using namespace std;

int main() {
	int n;
	int bag;
	cout << "노트북의 개수를 입력하세요: ";
	cin >> n;
	bag = (n + 3) / 4;
	cout << "필요한 가방의 수: " << bag << endl;
	
	return 0;
}