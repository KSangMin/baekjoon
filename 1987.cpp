#include<iostream>

using namespace std;

int r, c, cnt = 1;
string alphabet[20];
bool visited[20][20];
bool aVisited[26];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };

void dfs(int x, int y, int len) {
	aVisited[alphabet[x][y] - 'A'] = true;
	visited[x][y] = true;
	cnt = max(cnt, len);

	for (int i = 0; i < 4; i++) {
		int nX = x + dx[i];
		int nY = y + dy[i];

		if (0 <= nX && nX < r
			&& 0 <= nY && nY < c
			&& !visited[nX][nY]
			&& !aVisited[alphabet[nX][nY] - 'A']) {

			dfs(nX, nY, len + 1);
		}
	}

	visited[x][y] = false;
	aVisited[alphabet[x][y] - 'A'] = false;

	return;
}

int main() {
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		cin >> alphabet[i];
	}

	dfs(0, 0, 1);

	cout << cnt;

	return 0;
}