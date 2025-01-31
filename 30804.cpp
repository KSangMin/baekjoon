#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	queue<int> q;
	vector<int> cnt(10, 0);
	int kind = 0, answer = 0;

	while (n--) {
		int temp;
		cin >> temp;
		q.push(temp);

		if (cnt[temp] == 0) kind++;
		cnt[temp]++;

		while (kind > 2) {
			temp = q.front();
			q.pop();

			cnt[temp]--;
			if (cnt[temp] == 0) kind--;
		}

		answer = max(answer, (int)q.size());
	}

	cout << answer;

	return 0;
}