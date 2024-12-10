#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int N = 0, M = 0;
	scanf("%d", &N);
	vector<int> n(N);
	
	for (int i = 0; i < N; i++) {
		scanf("%d", &n[i]);
	}

	sort(n.begin(), n.end());

	cin >> M;
	int temp = 0;
	for (int i = 0; i < M; i++) {
		scanf("%d", &temp);
		(binary_search(n.begin(), n.end(), temp)) ? cout << 1 << "\n" : cout << 0 << "\n";
	}

	return 0;
}