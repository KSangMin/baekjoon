#include<iostream>
#include<vector>

using namespace std;

int n, r, q;
vector<vector<int>> edge(100001);
int cnt[100001];
bool visited[100001];

int dfs(int cur) {
	visited[cur] = true;

	int sum = 1;
	for (int i = 0; i < edge[cur].size(); i++) {
		int child = edge[cur][i];
		if (!visited[child]) sum += dfs(child);
	}

	cnt[cur] = sum;
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> r >> q;
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		edge[a].push_back(b);
		edge[b].push_back(a);
	}

	dfs(r);

	while (q--) {
		int a;
		cin >> a;
		cout << cnt[a] << "\n";
	}

	return 0;
}