#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[101];
int cnt[101];
int ladder[101];

void bfs() {
	queue<int> q;
	visited[1] = true;
	q.push(1);

	while (!q.empty()) {
		if (q.front() == 100) return;
		int cur = q.front();
		q.pop();

		for (int i = 1; i <= 6; i++) {
			int next = cur + i;
			if (ladder[next] != 0) next = ladder[next];
			if (visited[next]) continue;
			cnt[next] = cnt[cur] + 1;
			visited[next] = true;
			q.push(next);
		}
	}

	return;
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int a, b;
		cin >> a >> b;
		ladder[a] = b;
	}

	bfs();

	cout << cnt[100];

	return 0;
}