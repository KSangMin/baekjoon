#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	return a.second < b.second;
}

int main() {
	int N, L, K;
	cin >> N >> L >> K;
	vector<pair<int, int>> problem(N);

	for (int i = 0; i < N; i++) {
		cin >> problem[i].first >> problem[i].second;
	}

	sort(problem.begin(), problem.end(), cmp);
	int sum = 0;
	for (int i = 0; i < N; i++) {
		if (K <= 0)break;

		if (problem[i].first <= L) {
			sum += 100;
			K--;
		}
		if (problem[i].second <= L) {
			sum += 40;
		}
	}

	cout << sum;

	return 0;
}