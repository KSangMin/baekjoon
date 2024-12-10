#include<iostream>
#include<queue>
using namespace std;

int printOrder(queue<pair<int, int>> q, priority_queue<int> pq, int target) {
	int order = 1;
	while (q.size()) {
		if (pq.top() == q.front().second) {
			pq.pop();
			if (target == q.front().first) { return order; }
			q.pop();
			order++;
		}
		else {
			q.push(q.front());
			q.pop();
		}
	}
}

int main(void) {
	int T = 0, N = 0, M = 0, priority = 0;
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		queue<pair<int, int>> Q;
		priority_queue<int> PQ;
		pair<int, int> each;
		cin >> N >> M;
		for (int j = 0; j < N; j++) {
			cin >> priority;
			each.first = j;
			each.second = priority;
			Q.push(each);
			PQ.push(priority);
		}

		cout << printOrder(Q, PQ, M) << endl;
	}
	return 0;
}