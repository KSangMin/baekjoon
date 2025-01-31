#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
int ans[8];

void dfs(vector<int>& input, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	else {
		int comp = 0;
		for (int i = 0; i < n; i++) {
			if (input[i] != comp) {
				if (depth > 0 && input[i] < ans[depth - 1]) continue;
				ans[depth] = input[i];
				comp = ans[depth];
				dfs(input, depth + 1);
			}
		}
	}

	return;
}

int main() {
	cin >> n >> m;
	vector<int> input(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}

	sort(input.begin(), input.end());
	dfs(input, 0);

	return 0;
}