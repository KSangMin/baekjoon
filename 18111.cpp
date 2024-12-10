#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int N = 0, M = 0, B = 0, min = 256, max = 0;
	cin >> N >> M >> B;
	vector<vector<int>> blocks(N, vector<int>(M, 0));
	vector<int> result(2, 0);
	result[0] = 128000000;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> blocks[i][j];
			if (blocks[i][j] < min) { min = blocks[i][j]; }
			if (blocks[i][j] > max) { max = blocks[i][j]; }
		}
	}

	int dig = 0, set = 0;
	for (int i = min; i <= max; i++) {
		dig = 0, set = 0;
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (blocks[j][k] > i) { dig += blocks[j][k] - i; }
				else if (blocks[j][k] < i) { set += i - blocks[j][k]; }
			}
		}
		if (dig + B >= set) {
			if ((dig * 2) + set <= result[0]) {
				result[0] = (dig * 2) + set;
				result[1] = i;
			}
		}
	}

	cout << result[0] << " " << result[1] << endl;

	return 0;
}