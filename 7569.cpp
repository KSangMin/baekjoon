#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m, h;
queue<vector<int>> q;
int dx[6] = { 1, -1, 0, 0, 0, 0};
int dy[6] = { 0, 0, 1, -1, 0, 0 };
int dz[6] = { 0, 0, 0, 0, 1, -1 };
int cnt;

void bfs(vector<vector<vector<int>>>& box) {
	while (!q.empty()) {
		vector<int> cur = q.front();
		q.pop();

		for (int i = 0; i < 6; i++) {
			int nZ = cur[0] + dz[i];
			int nX = cur[1] + dx[i];
			int nY = cur[2] + dy[i];

			if (0 <= nZ && nZ <h
				&& 0 <= nX && nX < m
				&& 0 <= nY && nY < n
				&& box[nZ][nX][nY] == 0) {

				box[nZ][nX][nY] = box[cur[0]][cur[1]][cur[2]] + 1;
				cnt = max(cnt, box[nZ][nX][nY]);
				q.push({ nZ, nX, nY });
			}
		}
	}
}

int main() {


	cin >> n >> m >> h;
	vector<vector<vector<int>>> box(h, vector<vector<int>>(m, vector<int>(n, 0)));
	bool flag = false;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				cin >> box[i][j][k];

				if (box[i][j][k] == 1) q.push({i, j, k});
				else if (box[i][j][k] == 0) flag = true;
			}
		}
	}

	if (flag == false) {
		cout << "0";
		return 0;
	}

	bfs(box);

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < n; k++) {
				if (box[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << cnt - 1;

	return 0;
}
