#include <iostream>
using namespace std;

int main(void) {
	int t = 0, h = 0, w = 0, n = 0;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;

		if (n % h == 0) {
			cout << (100 * h) + (n / h) << endl;
		}
		else {
			cout << (100 * (n % h)) + (n / h) + 1 << endl;
		}
	}

	return 0;
}