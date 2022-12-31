#include <iostream>
using namespace std;

int main(void) {
	int n = 0, calc = 0, result = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		calc = i;
		for (int temp = i; temp != 0; temp /= 10) {
			calc += temp % 10;
		}
		if (calc == n) {
			result = i;
			break;
		}
	}

	cout << result;

	return 0;
}