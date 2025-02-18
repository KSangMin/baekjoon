#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> point(n);
	int x = 0, y = 0;
	for (int i = 0; i < n; i++) {
		cin >> point[i].first >> point[i].second;
		x += point[i].first;
		y += point[i].second;
	}

	cout << x << " " << y << "\n";

	double dist = 2000;
	for (int i = 0; i < n; i++) {
		x = 0;
		y = 0;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			x += point[j].first;
			y += point[j].second;
		}
		dist = min(dist, sqrt(x * x + y * y));
	}

	cout << fixed;
	cout.precision(2);
	cout << dist;

	return 0;
}