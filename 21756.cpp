#include<iostream>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;

	queue<int> q;
	for (int i = 1; i <= n; i++) {
		q.push(i);
	}

	while (q.size() > 1) {
		int size = q.size();
		for (int i = 1; i <= size; i++) {
			if (i % 2 == 1) {
				q.pop();
			}
			else {
				q.push(q.front());
				q.pop();
			}
		}
	}

	cout << q.front();

	return 0;
}