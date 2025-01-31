#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int parent[100001];
bool visited[100001];
queue<int>q;

void bfs(vector<vector<int>>& node) {
	while (!q.empty()) {
		int par = q.front();
		q.pop();

		for (int i = 0; i < node[par].size(); i++) {
			int child = node[par][i];
			if (!visited[child]) {
				visited[child] = true;
				q.push(child);
				parent[child] = par;
			}
		}
	}

	return;
}

int main() {
	int n;
	cin >> n;
	vector<vector<int>> node(n + 1);
	for (int i = 1; i < n; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		node[b].push_back(a);
	}

	q.push(1);
	visited[1] = true;
	bfs(node);

	for (int i = 2; i <= n; i++) {
		cout << parent[i] << "\n";
	}

	return 0;
}