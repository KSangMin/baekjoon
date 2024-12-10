#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m;
queue<pair<int, int>> q;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int cnt;

void bfs(vector<vector<int>>& box) {
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = cur.first + dx[i];
			int nY = cur.second + dy[i];

			if (0 <= nX
				&& nX < box.size()
				&& 0 <= nY
				&& nY < box[0].size()
				&& box[nX][nY] == 0) {

				box[nX][nY] = box[cur.first][cur.second] + 1;
				if (box[nX][nY] > cnt) cnt = box[nX][nY];
				q.push({ nX, nY });
			}
		}
	}
}

int main() {
	cin >> n >> m;
	vector<vector<int>> box(m, vector<int>(n, 0));
	bool flag = false;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> box[i][j];

			if (box[i][j] == 1) q.push({ i, j });
			else if (box[i][j] == 0) flag = true;
		}
	}

	if (flag == false) {
		cout << "0\n";
		return 0;
	}

	bfs(box);

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (box[i][j] == 0) {
				cout << -1 << "\n";
				return 0;
			}
		}
	}

	cout << cnt - 1 << "\n";

	return 0;
}