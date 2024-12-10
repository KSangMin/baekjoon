#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	vector<int> score(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	sort(score.begin(), score.end());
	int start = round(n * 0.15);
	int sum = 0;

	for (int i = start; i < n - start; i++) {
		sum += score[i];
	}

	cout << round(float(sum) / (n - 2 * start));

	return 0;
}