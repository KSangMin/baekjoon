#include<iostream>
#include<vector>

using namespace std;

int n, m;
int combi[13];
vector<vector<int>> cases;
vector<pair<int, int>> house;
vector<pair<int, int>> chicken;

void FindCombination(int cur, int depth) {
	if (depth == m) cases.emplace_back(combi, combi + m);
	else {
		for (int i = cur; i < chicken.size(); i++) {
			combi[depth] = i;
			FindCombination(i + 1, depth + 1);
		}
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++) {
			int input;
			cin >> input;
			if (input == 1) house.push_back({ i, j });
			if (input == 2) chicken.push_back({ i, j });
		}
	}

	FindCombination(0, 0);

	int mDist = 2147483647;
	for (int i = 0; i < cases.size(); i++) {
		int sum = 0;
		for (int j = 0; j < house.size(); j++) {
			int count = 2147483647;
			for (int k = 0; k < m; k++) {
				int dist = abs(house[j].first - chicken[cases[i][k]].first)
					+ abs(house[j].second - chicken[cases[i][k]].second);
				count = min(count, dist);
			}
			sum += count;
		}
		mDist = min(mDist, sum);
	}

	cout << mDist;

	return 0;
}