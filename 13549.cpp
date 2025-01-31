#include<iostream>
#include<queue>

using namespace std;

int dp[200001];
int visited[200001];
int n, k;
deque<int> q;

void bfs() {
	q.push_back(n);
	visited[n] = true;

	while (!q.empty()) {
		if (q.front() == k) return;
		int cur = q.front();
		q.pop_front();

		if (cur < 50001 && !visited[cur * 2]) {
			dp[cur * 2] = dp[cur];
			visited[cur * 2] = true;
			q.push_front(cur * 2);
		}
		if (0 < cur && !visited[cur - 1]) {
			dp[cur - 1] = dp[cur] + 1;
			visited[cur - 1] = true;
			q.push_back(cur - 1);
		}
		if (cur < 100000 && !visited[cur + 1]) {
			dp[cur + 1] = dp[cur] + 1;
			visited[cur + 1] = true;
			q.push_back(cur + 1);
		}
	}
}

int main() {
	cin >> n >> k;

	bfs();

	cout << dp[k];

	return 0;
}