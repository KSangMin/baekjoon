#include<iostream>

using namespace std;

int n;
bool dir[100][100];

void Floyd_Warshall() {
	for (int mid = 0; mid < n; mid++) {
		for (int start = 0; start < n; start++) {
			for (int end = 0; end < n; end++) {
				if (dir[start][mid] && dir[mid][end]) dir[start][end] = 1;
			}
		}
	}
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> dir[i][j];
		}
	}

	Floyd_Warshall();

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << dir[i][j] << " ";
		}
		cout << "\n";
	}

	return 0;
}