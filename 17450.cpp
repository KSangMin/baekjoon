#include<iostream>

using namespace std;

int main() {
	int price, weight;

	float best = 0;
	int bestId = 1;
	for (int i = 1; i <= 3; i++) {
		cin >> price >> weight;

		float temp = (float)weight / (price >= 500 ? price - 50 : price);
		if (temp > best) {
			best = temp;
			bestId = i;
		}
	}

	switch (bestId) {
	case 1:
		cout << "S\n";
		break;
	case 2:
		cout << "N\n";
		break;
	case 3:
		cout << "U\n";
		break;
	}

	return 0;
}