#include<iostream>
#include<vector>
#include<queue>

using namespace std;

void bfs(int start, int target) {
	vector<int> visited(10000, false);
	queue<pair<int, string>> q;
	q.push({ start,"" });
	visited[start] = true;


	while (!q.empty()) {
		int cur = q.front().first;
		string curS = q.front().second;
		q.pop();

		if (cur == target) {
			cout << curS << "\n";
			return;
		}

		int	d = (cur * 2) % 10000
			, s = (cur + 9999) % 10000
			, l = (cur % 1000) * 10 + cur / 1000
			, r = (cur % 10) * 1000 + cur / 10;

		if (!visited[d]) {
			visited[d] = true;
			q.push({ d, curS + "D" });
		}
		if (!visited[s]) {
			visited[s] = true;
			q.push({ s, curS + "S" });
		}
		if (!visited[l]) {
			visited[l] = true;
			q.push({ l, curS + "L" });
		}
		if (!visited[r]) {
			visited[r] = true;
			q.push({ r, curS + "R" });
		}
	}
}

int main() {
	int n, a, b;
	cin >> n;

	while (n--) {
		cin >> a >> b;
		bfs(a, b);
	}

	return 0;
}