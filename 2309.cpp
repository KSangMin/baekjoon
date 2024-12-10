#include<iostream>
#include<algorithm>
using namespace std;

int main(void) {
	int dwarfs[9], sum = 0;

	for (int i = 0; i < 9; i++) {
		cin >> dwarfs[i];
		sum += dwarfs[i];
	}

	sort(dwarfs, dwarfs + 9);

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (sum - dwarfs[i] - dwarfs[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << dwarfs[k] << endl;
					}
				}
				return 0;
			}
		}
	}

	return 0;
}