#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
int cnt;
queue<pair<int, int>> q;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void bfs(vector<vector<char>>& map, vector<vector<bool>>& visited) {
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		if (map[cur.first][cur.second] == 'P') cnt++;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = cur.first + dx[i];
			int nY = cur.second + dy[i];

			if (0 <= nX && nX < map.size()
				&& 0 <= nY && nY < map[0].size()
				&& !visited[nX][nY]
				&& map[nX][nY] != 'X') {

				visited[nX][nY] = true;
				q.push({ nX,nY });
			}
		}
	}
}

int main() {
	cin >> n >> m;
	
	vector<vector<char>> map(n, vector<char>(m));
	vector<vector<bool>> visited(n, vector<bool>(m, false));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int input;
			cin >> map[i][j];
			if (map[i][j] == 'I') {
				q.push({ i,j });
			}
		}
	}

	bfs(map, visited);

	if (cnt <= 0) cout << "TT";
	else cout << cnt;
	cout << "\n";

	return 0;
}