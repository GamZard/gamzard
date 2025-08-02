#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int score1;
	int score2;
	int score3;
	double sum;
	double avg;

	cout << "첫 번째 학생 점수: ";
	cin >> score1;
	cout << "두 번째 학생 점수: ";
	cin >> score2;
	cout << "세 번째 학생 점수: ";
	cin >> score3;
	sum = score1 + score2 + score3;
	avg = static_cast<double>(sum) / 3.0;
	
	cout << endl << "총점: " << sum << endl;
	cout << "평균: " << fixed << setprecision(2) << avg << endl;

	return 0;
}