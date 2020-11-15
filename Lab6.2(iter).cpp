#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* c, const int size, int min, int max) {
	for (int i = 0; i < size; i++) {
		c[i] = min + rand() % (max - min + 1);
	}
}

void arrPrint(int* c, const int size) {
	for (int i = 0; i < size; i++) {
		cout << setw(4) << c[i];
	}
	cout << endl;
}

int arrMaxMin(int* c, const int size, int max, int min, int& indexMax, int& indexMin) {
	for (int i = 1; i < size; i++) {
		if (c[i] > max) {
			max = c[i];
			indexMax = i;
		}
		if (c[i] < min) {
			min = c[i];
			indexMin = i;
		}
	}
	return indexMax;
}



int main()
{
	srand((unsigned)time(NULL));

	const int a = 15;

	int indexMax = 0, indexMin = 0;

	int c[a];

	int Low = 5;
	int High = 90;

	Create(c, a, Low, High);
	arrPrint(c, a);
	arrMaxMin(c, a, c[0], c[0], indexMax, indexMin);
	cout << "indexMax = " << indexMax << endl;
	cout << "indexMin = " << indexMin << endl;


	system("pause");
	cin.get();
	return 0;

}

