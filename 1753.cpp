#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int v, e, start;
vector<int> dist(20001, 2147483647);
vector<vector<pair<int, int>>> edge(20001);
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;

void Dijkstra() {
	q.push({ 0, start });
	dist[start] = 0;

	while (!q.empty()) {
		int cur = q.top().second;
		int cDist = q.top().first;
		q.pop();

		if (cDist > dist[cur]) continue;

		for (int i = 0; i < edge[cur].size(); i++) {
			int next = edge[cur][i].first;
			int nDist = edge[cur][i].second;

			if (cDist + nDist < dist[next]) {
				dist[next] = cDist + nDist;
				q.push({ dist[next], next });
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> v >> e >> start;
	while(e--) {
		int s, d, w;
		cin >> s >> d >> w;
		edge[s].push_back({ d,w });
	}
	
	Dijkstra();

	for (int i = 1; i <= v; i++) {
		if (dist[i] == 2147483647) cout << "INF";
		else cout << dist[i];
		cout << "\n";
	}

	return 0;
}