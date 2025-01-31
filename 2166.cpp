#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> point(n);
	for (int i = 0; i < n; i++) {
		cin >> point[i].first >> point[i].second;
	}

	long double ans = 0, a = point[0].first, b = point[0].second;
	for (int i = 1; i < n - 1; i++) {
		long double c = point[i].first, d = point[i].second, e = point[i + 1].first, f = point[i + 1].second;
		ans += ((a * d + c * f + e * b) - (b * c + d * e + f * a)) / 2;
	}

	cout << fixed;
	cout.precision(1);
	cout << abs(ans);

	return 0;
}