#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int sum;
vector<vector<int>> rel(101, vector<int>());
queue<int> q;

void bfs(vector<bool>& visited, vector<int>& dist) {
	int start = q.front();

	while (!q.empty()) {
		int cur = q.front();
		q.pop();

		for (int i = 0; i < rel[cur].size(); i++) {
			int next = rel[cur][i];
			if (!visited[next] && dist[next] == 0) {
				dist[next] = dist[cur] + 1;
				q.push(next);
			}
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		rel[a].push_back(b);
		rel[b].push_back(a);
	}

	vector<int> cabin(n + 1, 0);
	for (int i = 1; i <= n; i++) {
		vector<bool> visited(n + 1, false);
		vector<int> dist(n + 1, 0);

		q.push(i);
		visited[i] = true;
		bfs(visited, dist);

		int sum = 0;
		for (int j = 1; j <= n; j++) {
			sum += dist[j];
		}
		cabin[i] = sum;
	}

	int min = cabin[1];
	for (int i = 2; i <= n; i++) {
		if (cabin[i] < min) min = cabin[i];
	}

	for (int i = 1; i <= n; i++) {
		if (cabin[i] == min) {
			cout << i << "\n";
			break;
		}
	}

	return 0;
}