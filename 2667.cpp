#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

int n;
string apart[25];
bool visited[25][25];
queue<pair<int, int>> q;
vector<int> danji;
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
int cnt;

void bfs() {
	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nX = cur.first + dx[i];
			int nY = cur.second + dy[i];

			if (0 <= nX && nX < n
				&& 0 <= nY && nY < n
				&& !visited[nX][nY]
				&& apart[nX][nY] == '1') {

				cnt++;
				visited[nX][nY] = true;
				q.push({ nX,nY });
			}
		}
	}

	return;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> apart[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (visited[i][j] || apart[i][j] == '0') continue;
			else {
				cnt = 1;
				q.push({ i,j });
				visited[i][j] = true;
				bfs();
				danji.push_back(cnt);
			}
		}
	}

	sort(danji.begin(), danji.end());
	cout << danji.size() << "\n";
	for (int i = 0; i < danji.size(); i++) {
		cout << danji[i] << "\n";
	}

	return 0;
}