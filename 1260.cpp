#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void dfs(int v, vector<vector<bool>> &edge, vector<bool> &check) {
	check[v] = true;
	cout << v << " ";
	for (int i = 1; i < edge[v].size(); i++) {
		if (edge[v][i]) {
			if (!check[i]) {
				dfs(i, edge, check);
			}
		}
	}
}

void bfs(int v, vector<vector<bool>>& edge, vector<bool> check) {
	queue<int> q;
	check[v] = true;
	q.push(v);

	while (!q.empty()) {
		int t = q.front();
		cout << t << " ";
		q.pop();
		for (int i = 1; i < edge[t].size(); i++) {
			if (edge[t][i]) {
				if (!check[i]) {
					q.push(i);
					check[i] = true;
				}
			}
		}
	}
}

int main(void) {
	int N = 0, M = 0, V = 0;
	cin >> N >> M >> V;
	vector<vector<bool>> edge(N + 1, vector<bool>(N + 1, false));
	vector<bool> checkD(N + 1, false);
	vector<bool> checkB(N + 1, false);

	int a = 0, b = 0;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		edge[a][b] = edge[b][a] = true;
	}

	dfs(V, edge, checkD);
	cout << "\n";
	bfs(V, edge, checkB);
}