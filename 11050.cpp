#include <iostream>
using namespace std;

int fact(int n) {
	int result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main(void) {
	int n = 0, k = 0;
	cin >> n >> k;
	cout << fact(n) / fact(n - k) / fact(k);

	return 0;
}