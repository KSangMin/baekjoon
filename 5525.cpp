#include<iostream>

using namespace std;

int main() {
	int n, ans = 0;
	string S;
	cin >> n >> S >> S;

	int cnt = (S[0] == 'I');
	for (int i = 1; i < S.size(); i++) {
		if (S[i] == S[i - 1]) {
			if (cnt >= 2 * n + 1) ans += ((cnt - 1) / 2) - n + 1;
			cnt = (S[i] == 'I');
		}
		else cnt++;
	}

	if (cnt >= 2 * n + 1) ans += ((cnt - 1) / 2) - n + 1;

	cout << ans;

	return 0;
}