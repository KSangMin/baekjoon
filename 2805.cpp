#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int N = 0, M = 0, min = 0, max = 0, result = 0;
	long long sum = 0;
	cin >> N >> M;
	vector<int> tree(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> tree[i];
		if (tree[i] > max) { max = tree[i]; }
	}

	int i = 0;
	while(min <= max) {
		i = (max + min) / 2;
		sum = 0;
		for (int j = 0; j < N; j++) {
			if (tree[j] > i) { sum += tree[j] - i; }
		}
		if (sum >= M) {
			if (i > result) { result = i; }
			min = i + 1;
		}
		else {
			max = i - 1;
		}
	}
	
	cout << result << endl;

	return 0;
}