#include<iostream>
#include<vector>

using namespace std;

int n, m;
int combi[9];

void dfs(int cur, int depth) {
	if (depth == m) {//출력
		for (int i = 0; i < m; i++) {
			cout << combi[i] << " ";
		}
		cout << "\n";
		return;
	}

	else {
		for (int i = cur; i <= n; i++) {
			combi[depth] = i;
			dfs(i + 1, depth + 1);
		}
	}

	return;
}

int main() {
	cin >> n >> m;
	
	dfs(1, 0);

	return 0;
}