#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int parent[10001];
vector<vector<int>> edges;
long long sum = 0;

bool cmp(vector<int> a, vector<int> b) {
	return a[0] < b[0];
}

int main() {
	int v, e;
	cin >> v >> e;
	while (e--) {
		int a, b, c;
		cin >> a >> b >> c;
		edges.push_back({ c,a,b });
	}
	
	sort(edges.begin(), edges.end(), cmp);

	for (int i = 1; i <= v; i++) {
		parent[i] = i;
	}

	int sum = 0;

	cout << sum;

	return 0;
}