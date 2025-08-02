#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int getFace();
int sumFace(int a, int b, int c, int d, int e, int f);

int main() {
	srand(time(0));
	int face1 = 0;
	int face2 = 0;
	int face3 = 0;
	int face4 = 0;
	int face5 = 0;
	int face6 = 0;
	for (int i = 0; i < 6000000; i++) {
		getFace();
		switch (getFace()) {
		case 1:
			face1++;
			break;
		case 2:
			face2++;
			break;
		case 3:
			face3++;
			break;
		case 4:
			face4++;
			break;
		case 5:
			face5++;
			break;
		case 6:
			face6++;
			break;
		}
	}
	cout << "Face" << setw(15) << "Frequency" << endl;
	cout << setw(4) << "1" << setw(15) << face1 << endl;
	cout << setw(4) << "2" << setw(15) << face2 << endl;
	cout << setw(4) << "3" << setw(15) << face3 << endl;
	cout << setw(4) << "4" << setw(15) << face4 << endl;
	cout << setw(4) << "5" << setw(15) << face5 << endl;
	cout << setw(4) << "6" << setw(15) << face6 << endl;
	cout << setw(4)	<< "Sum" << setw(15) << sumFace(face1, face2, face3, face4, face5, face6) << endl;
}

int getFace() {
	return (1 + rand() % 6);
}

int sumFace(int a, int b, int c, int d, int e, int f) {
	return a + b + c + d + e + f;
}