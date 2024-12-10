#include<iostream>
#include<vector>
using namespace std;

int color[2] = { 0, 0 };

void FindPaper(vector<vector<int>>& p, int sX, int sY, int n) {
	if (n == 1) {
		color[p[sX][sY]]++;
		return;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (p[sX][sY] != p[sX + i][sY + j]) {
				FindPaper(p, sX, sY, n / 2);
				FindPaper(p, sX, sY + n / 2, n / 2);
				FindPaper(p, sX + n / 2, sY, n / 2);
				FindPaper(p, sX + n / 2, sY + n / 2, n / 2);
				return;
			}
		}
	}

	color[p[sX][sY]]++;
	return;
}

int main(void) {
	int n = 0;
	cin >> n;
	vector<vector<int>> p(n + 1, vector<int>(n + 1, 0));

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> p[i][j];
		}
	}

	FindPaper(p, 1, 1, n);

	cout << color[0] << "\n" << color[1] << "\n";
}