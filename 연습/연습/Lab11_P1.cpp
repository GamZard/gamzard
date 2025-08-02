#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void generate(int numbers[], int size);
void bubble_sort(int numbers[], int size);
void swap(int& a, int& b);

int main() {
	srand(time(0));
	const int SIZE = 6;
	int arr[SIZE];

	generate(arr, SIZE);
	bubble_sort(arr, SIZE);

	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
}

void generate(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		numbers[i] = 1 + rand() % 45;
		for (int j = 0; j < i; j++) {
			if (numbers[i] == numbers[j]) {
				--i;
			}
		}
	}
}
void bubble_sort(int numbers[], int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (numbers[j] > numbers[j + 1]) {
				swap(numbers[j], numbers[j + 1]);
			}
		}
	}
}
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}