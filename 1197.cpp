#include<iostream>
#include<vector>

using namespace std;

vector<vector<pair<int, int>>> edges(10001);
long long sum = 0;

int main() {
	int v, e;
	cin >> v >> e;
	while (e--) {
		int a, b, c;
		cin >> a >> b >> c;
		edges[a].push_back({ b,c });
	}

	return 0;
}