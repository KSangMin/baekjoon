#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	vector<int> input(3), high(3), low(3);
	cin >> high[0] >> high[1] >> high[2];
	low = high;
	for (int i = 1; i < n; i++) {
		cin >> input[0] >> input[1] >> input[2];

		vector<int> next(3);
		next[0] = max(high[0], high[1]) + input[0];
		next[1] = max({high[0], high[1], high[2]}) + input[1];
		next[2] = max(high[1], high[2]) + input[2];
		high = next;

		next[0] = min(low[0], low[1]) + input[0];
		next[1] = min({low[0], low[1], low[2]}) + input[1];
		next[2] = min(low[1], low[2]) + input[2];
		low = next;
	}

	cout << max({ high[0], high[1], high[2] }) << " " << min({ low[0], low[1], low[2] });

	return 0;
}