#include <iostream>
#include <vector>
using namespace std;

void findWorm(vector<vector<bool>>& map, int r, int c) {
	if (r >= 0 && r < map.size() && c >= 0 && c < map[0].size() && map[r][c] == true) {
		map[r][c] = false;
		findWorm(map, r + 1, c);
		findWorm(map, r - 1, c);
		findWorm(map, r, c + 1);
		findWorm(map, r, c - 1);
	}
}

int main(void) {
	int T = 0, M = 0, N = 0, K = 0;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		int count = 0;

		cin >> M >> N >> K;
		vector<vector<bool>> temp(N, vector<bool>(M));

		int r = 0, c = 0;
		for (int j = 0; j < K; j++) {
			cin >> r >> c;
			temp[c][r] = true;
		}

		for (int j = 0; j < temp.size(); j++) {
			for (int k = 0; k < temp[0].size(); k++) {
				if (temp[j][k]) {
					findWorm(temp, j, k);
					count++;
				}
			}
		}

		cout << count << "\n";
	}
}