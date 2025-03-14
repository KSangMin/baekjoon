#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> front(n, 0);
	vector<int> back(n, 0);
	vector<bool> isFront(n, true);
	for (int i = 0; i < n; i++) {
		cin >> front[i] >> back[i];
	}

	int sum = 0;

	for (int i : front) {
		sum += i;
	}

	while (m--) {
		int command;
		cin >> command;

		for (int i = 0; i < n; i++) {
			if (isFront[i] && front[i] <= command) {
				sum += back[i] - front[i];
				isFront[i] = false;
			}
			else if (!isFront[i] && back[i] <= command) {
				sum += front[i] - back[i];
				isFront[i] = true;
			}
		}
	}

	cout << sum;

	return 0;
}