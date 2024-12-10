#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[1000][1000];
queue<pair<int, int>> q;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void bfs(vector<vector<int>>& map, vector<vector<int>>& ans) {
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			pair<int, int> next;
			next.first = cur.first + dx[i];
			next.second = cur.second + dy[i];

			if (0 <= next.first 
				&& next.first < ans.size() 
				&& 0 <= next.second 
				&& next.second < ans[0].size() 
				&& !visited[next.first][next.second]) {
				visited[next.first][next.second] = true;
				if (map[next.first][next.second] != 0) {
					ans[next.first][next.second] = ans[cur.first][cur.second] + 1;
					q.push(next);
				}
			}
		}
	}

	return;
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> map(n, vector<int>(m, 0));
	vector<vector<int>> ans(n, vector<int>(m, -1));

	pair<int, int> start;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> map[i][j];
			if (map[i][j] == 2) {
				start.first = i;
				start.second = j;
				visited[i][j] = true;
				ans[i][j] = 0;
			}
			else if (map[i][j] == 0) {
				ans[i][j] = 0;
			}
		}
	}

	q.push(start);
	bfs(map, ans);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << ans[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}