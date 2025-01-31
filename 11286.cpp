#include<iostream>
#include<queue>

using namespace std;


struct comp {
	bool operator()(int a, int b) {
		if (abs(a) == abs(b)) return a > b;
		return abs(a) > abs(b);
	}
};

priority_queue<int, vector<int>, comp> heap;

int main() {
	int n;
	cin >> n;
	while (n--) {
		int input;
		cin >> input;

		if (input == 0) {
			if (heap.empty()) {
				cout << 0;
			}
			else {
				cout << heap.top();
				heap.pop();
			}
			cout << "\n";
		}
		else {
			heap.push(input);
		}
	}

	return 0;
}