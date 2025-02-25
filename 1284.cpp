#include<iostream>

using namespace std;

int main() {
	int n;

	do {
		int sum = 0;
		cin >> n;
		if (n == 0) break;

		while (n > 0) {
			int i = n % 10;
			if (i == 1) sum += 3;
			else if (i == 0) sum += 5;
			else sum += 4;
			n /= 10;
		}

		cout << sum + 1 << "\n";
	} while (true);

	return 0;
}