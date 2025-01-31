#include<iostream>

using namespace std;

int main() {
	int a, b, cnt = 1;
	cin >> a >> b;
	
	while (b >= a) {
		if (b == a) {
			cout << cnt;
			return 0;
		}

		if (b % 2 == 0) b /= 2;
		else if (b % 10 == 1) b /= 10;
		else break;
		cnt++;
	}

	cout << -1;

	return 0;
}