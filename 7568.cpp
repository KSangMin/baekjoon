#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int N = 0, x = 0, y = 0;
	cin >> N;
	vector<vector<int>> people(N,vector<int>(2,0));
	vector<int> order(N, N + 1);

	for (int i = 0; i < N; i++) {
		cin >> people[i][0] >> people[i][1];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!(people[j][0] < people[i][0] && people[j][1] < people[i][1])) {
				order[j]--;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << order[i] << " ";
	}

	return 0;
}