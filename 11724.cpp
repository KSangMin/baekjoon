#include<iostream>
#include<vector>
using namespace std;

vector<int> graph[1001];
bool check[1001];

void dfs(int v) {
	check[v] = true;
	for (int i = 0; i < graph[v].size(); i++) {
		if (!check[graph[v][i]]) {
			dfs(graph[v][i]);
		}
	}
	return;
}

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);


	int n = 0, m = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int tempA = 0, tempB = 0;
		cin >> tempA >> tempB;
		graph[tempA].push_back(tempB);
		graph[tempB].push_back(tempA);
	}

	int answer = 0;
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i);
			answer++;
		}
	}

	cout << answer << "\n";

	return 0;
}