#include<iostream>

using namespace std;

int p[100];

int main() {
	int n, x;

	cin >> n >> x;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	int i = 0;
	while (x <= p[i % n]) {
		x++;
		i++;
	}

	cout << i % n + 1;

	return 0;
}