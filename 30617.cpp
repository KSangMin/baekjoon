#include<iostream>
#include<vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	vector<pair<int, int>> r(t);

	for (int i = 0; i < t; i++) {
		cin >> r[i].first >> r[i].second;
	}

	int sum = 0;
	if (r[0].first != 0 && r[0].first == r[0].second) sum ++;
	for (int i = 1; i < t; i++) {
		int cL = r[i].first, cR = r[i].second;
		int bL = r[i - 1].first, bR = r[i - 1].second;

		if (cL && cL == bL) sum++;
		if (cR && cR == bR) sum++;
		if (cL != 0 && cL == cR)sum++;
	}

	cout << sum;

	return 0;
}