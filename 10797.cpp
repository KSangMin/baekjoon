#include<iostream>

using namespace std;

int main() {
	int n, a, sum = 0;
	cin >> n;

	for (int i = 0; i < 5; i++) {
		cin >> a;
		if (a == n) sum++;
	}

	cout << sum;

	return 0;
}