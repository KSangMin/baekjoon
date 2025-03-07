#include<iostream>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if (a <= b || a > 2 * b) cout << "NO";
	else {
		int n = a - b;
		cout << "YES\n" << n << "\n";

		for (int i = 1; i < n; i++) {
			a -= 2;
			b -= 1;
			cout << "aba\n";
		}

		for (int i = 0; i < b; i++) {
			cout << "ab";
		}
		cout << "a";
	}

	return 0;
}