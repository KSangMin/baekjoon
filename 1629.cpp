#include<iostream>

using namespace std;

int main() {
	long long a, b, c, ans = 1;
	cin >> a >> b >> c;
	
	while (b) {
		if (b & 1) ans = (ans * a) % c;
		a = (a * a) % c;
		b /= 2;
	}

	cout << ans;

	return 0;
}