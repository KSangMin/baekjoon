#include<iostream>
#include<algorithm>

using namespace std;

int n;
int houses[1001][3];

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> houses[i][j];
		}
	}

	for (int i = 2; i <= n; i++) {
		houses[i][0] += min(houses[i - 1][1], houses[i - 1][2]);
		houses[i][1] += min(houses[i - 1][0], houses[i - 1][2]);
		houses[i][2] += min(houses[i - 1][0], houses[i - 1][1]);
	}

	cout << min({ houses[n][0], houses[n][1], houses[n][2] });

	return 0;
}