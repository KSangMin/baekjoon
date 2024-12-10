#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int N = 0, M = 0, min = 32;
	vector<string> pattern{
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB",
		"BWBWBWBW",
		"WBWBWBWB"
	};

	cin >> N >> M;
	vector<string> chess(N, "");
	for (int i = 0; i < N; i++) {
		cin >> chess[i];
	}

	int ifwhite = 0, ifblack = 0;
	for (int h = 0; h <= N - 8; h++) {
		for (int i = 0; i <= M - 8; i++) {
			ifwhite = 0;
			for (int j = h; j < h + 8; j++) {
				for (int k = i; k < i + 8; k++) {
					if (pattern[j - h][k - i] != chess[j][k]) {
						ifwhite++;
					}
				}
			}
			if (ifwhite < min) { min = ifwhite; }

		}
	}

	for (int h = 0; h <= N - 8; h++) {
		for (int i = 0; i <= M - 8; i++) {
			ifblack = 0;
			for (int j = h; j < h + 8; j++) {
				for (int k = i; k < i + 8; k++) {
					if (pattern[j - h + 1][k - i] != chess[j][k]) {
						ifblack++;
					}
				}
			}
			if (ifblack < min) { min = ifblack; }
		}
	}

	cout << min;
	return 0;
}