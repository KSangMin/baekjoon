#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int n, m, start, dest;
vector<vector<pair<int, int>>> city(1001);
int dist[1001];
bool visited[1001];

void Dijkstra() {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
	dist[start] = 0;
	q.push({ dist[start], start });

	while (!q.empty()) {
		int cur = q.top().second;
		int distance = q.top().first;
		q.pop();

		if (visited[cur]) continue;
		visited[cur] = true;

		for (int i = 0; i < city[cur].size(); i++) {
			int next = city[cur][i].first;
			int nextdist = city[cur][i].second;

			if (visited[next]) continue;

			if (dist[next] > dist[cur] + nextdist) {
				dist[next] = dist[cur] + nextdist;
				q.push({ dist[next], next });
			}
		}
	}
	return;
}

int main() {
	cin >> n >> m;

	int a, b, c;
	while (m--) {
		cin >> a >> b >> c;
		city[a].push_back({ b, c });
	}

	cin >> start >> dest;
	fill_n(dist, 1001, 2147483647);
	Dijkstra();

	cout << dist[dest];

	return 0;
}