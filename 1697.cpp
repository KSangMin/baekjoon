#include<iostream>
#include<vector>
#include<queue>

using namespace std;

bool visited[200001];
int dp[200001];
int count = 0;

void bfs(int start, int target) {
	queue<int> q;
	
	visited[start] = true;
	q.push(start);
	while (!q.empty()) {
		int cur = q.front();
		if (cur == target) return;
		q.pop();

		if (cur > 0 && !visited[cur - 1]) {
			dp[cur - 1] = dp[cur] + 1;
			visited[cur - 1] = true;
			q.push(cur - 1);
		}
		if (cur < 100000 && !visited[cur + 1]) {
			dp[cur + 1] = dp[cur] + 1;
			visited[cur + 1] = true;
			q.push(cur + 1);
		}
		if (cur < 50001 && !visited[cur * 2]) {
			dp[cur * 2] = dp[cur] + 1;
			visited[cur * 2] = true;
			q.push(cur * 2);
		}
	}
}

int main() {
	int n, k;
	cin >> n >> k;

	bfs(n, k);

	cout << dp[k] << "\n";

	return 0;
}