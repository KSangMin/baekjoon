#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
string rgb[100];

void bfs(vector<vector<bool>>& visited, int sX, int sY ,bool isColor) {
	queue<pair<int, int>> q;
	q.push({ sX, sY });
	visited[sX][sY] = true;

	while (!q.empty()) {
		int cX = q.front().first;
		int cY = q.front().second;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = cX + dx[i];
			int nY = cY + dy[i];

			if (0 <= nX && nX < n && 0 <= nY && nY < n && !visited[nX][nY]) {
				bool isColorWeakness = (rgb[cX][cY] == 'R' || rgb[cX][cY] == 'G') && (rgb[nX][nY] == 'R' || rgb[nX][nY] == 'G');

				if (rgb[cX][cY] == rgb[nX][nY] || (!isColor && isColorWeakness)) {
					visited[nX][nY] = true;
					q.push({ nX, nY });
				}
			}
		}

	}
}

int ColorWeakness(bool isColor) {
	int cnt = 0;
	vector<vector<bool>> visited(n, vector<bool>(n, false));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!visited[i][j]) {
				cnt++;
				bfs(visited, i, j, isColor);
			}
		}
	}

	return cnt;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> rgb[i];
	}
	
	cout << ColorWeakness(true) << " " << ColorWeakness(false);
	
	return 0;
}