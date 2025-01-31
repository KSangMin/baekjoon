#include<iostream>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n) {
		for (int i = 0; i <= 5; i++) {
			int digit = pow(9, i);
			if (n / digit < 9) {
				ans += n / digit * pow(10, i);
				n %= digit;
				break;
			}
		}
	}

	cout << ans;

	return 0;
}