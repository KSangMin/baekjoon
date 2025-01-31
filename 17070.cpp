#include<iostream>
#include<queue>

using namespace std;

int n;
bool house[17][17];
int dp[17][17];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> house[i][j];
		}
	}

	for (int i = 3; i <= n; i++) {
		for (int j = 1; j <= n; j++) {

		}
	}

	return 0;
}