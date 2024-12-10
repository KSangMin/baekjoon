#include<iostream>
#include<vector>
using namespace std;

int Node = 0, Edge = 0, cnt = 0;
bool Edges[101][101];
bool linked[101] = { false,true, };

void dfs(int n) {
	cnt++;
	linked[n] = true;

	for (int i = 1; i <= Node; i++) {
		if (Edges[n][i] && !linked[i]) {
			dfs(i);
		}
	}
}

int main(void) {
	int a = 0, b = 0;

	cin >> Node >> Edge;

	for (int i = 0; i < Edge; i++) {
		cin >> a >> b;
		Edges[a][b] = Edges[b][a] = true;
	}

	dfs(1);

	cout << cnt - 1 << endl;

	return 0;
}