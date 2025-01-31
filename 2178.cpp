#include<iostream>
#include<vector>
#include<queue>

using namespace std;

pair<int, int> dest;
queue<pair<int, int>> q;
int cnt[100][100];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void bfs(vector<string>& maze) {
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		if (cur == dest) return;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = cur.first + dx[i];
			int nY = cur.second + dy[i];

			if (0 <= nX && nX < maze.size()
				&& 0 <= nY && nY < maze[0].size()
				&& maze[nX][nY] == '1'
				&& cnt[nX][nY] == 0) {

				cnt[nX][nY] = cnt[cur.first][cur.second] + 1;
				q.push({ nX,nY });
			}
		}
	}

	return;
}

int main(void) {
	int n, m;
	cin >> n >> m;
	dest = { n - 1,m - 1 };
	vector<string> maze(n, "");
	for (int i = 0; i < n; i++) {
		cin >> maze[i];
	}

	q.push({ 0,0 });
	cnt[0][0] = 1;
	bfs(maze);
	
	cout << cnt[n - 1][m - 1] << "\n";

	return 0;
}