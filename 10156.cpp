#include<iostream>

using namespace std;

int main() {
	int k, n, m;
	cin >> k >> n >> m;

	cout << max(k * n - m, 0);

	return 0;
}