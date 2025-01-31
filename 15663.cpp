#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, m;
int combi[8];
bool visited[8];

void dfs(vector<int>& nat, int depth) {
	if (depth == m) {
		for (int i = 0; i < m; i++) {
			cout << combi[i] << " ";
		}
		cout << "\n";
	}
	else {
		int comp = 0;
		for (int i = 0; i < n; i++) {
			if (!visited[i] && nat[i] != comp) {
				visited[i] = true;
				combi[depth] = nat[i];
				comp = combi[depth];
				dfs(nat, depth + 1);
				visited[i] = false;
			}
		}
	}

	return;
}

int main() {
	cin >> n >> m;
	vector<int> nat(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> nat[i];
	}

	sort(nat.begin(), nat.end());
	dfs(nat, 0);

	return 0;
}