#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> tri(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			int input;
			cin >> input;
			tri[i].push_back(input);
		}
	}

	for (int i = 1; i < n; i++) {
		for (int j = 0; j < tri[i].size(); j++) {
			if (j <= 0) tri[i][j] += tri[i - 1][j];
			else if (j >= tri[i].size() - 1) tri[i][j] += tri[i - 1][j - 1];
			else tri[i][j] += max(tri[i - 1][j - 1], tri[i - 1][j]);
		}
	}

	cout << *max_element(tri[n - 1].begin(), tri[n - 1].end());

	return 0;
}