#include <iostream>
using namespace std;

int main(void) {
	int num[3] = { 0 };
	while (true) {
		cin >> num[0] >> num[1] >> num[2];
		if (!(num[0] || num[1] || num[2])) { break; }
		
		for (int i = 0; i < 2; i++) {
			if (num[i] > num[i+1]) {
				swap(num[i], num[i+1]);
			}
		}

		if (num[0] * num[0] + num[1] * num[1] == num[2] * num[2]) { cout << "right" << endl; }
		else { cout << "wrong" << endl; }
	}
	return 0;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}