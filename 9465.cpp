#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<vector<int>> sticker(2, vector<int>(n, 0));
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < n; j++) {
				cin >> sticker[i][j];
			}
		}

		for (int i = 1; i < n; i++) {
			if (i >= 2) {
				sticker[0][i] += max({ sticker[0][i - 2], sticker[1][i - 2], sticker[1][i - 1] });
				sticker[1][i] += max({ sticker[0][i - 2], sticker[1][i - 2], sticker[0][i - 1] });
			}
			else {
				sticker[0][i] += sticker[1][i - 1];
				sticker[1][i] += sticker[0][i - 1];
			}
		}
		cout << max(sticker[0][n - 1], sticker[1][n - 1]) << "\n";
	}

	return 0;
}