#include <iostream>
#include <stack>
using namespace std;


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<char> left, right;
	string input = "";
	int M = 0;
	char c = ' ', P = ' ';

	cin >> input >> M;
	for (int i = 0; i < input.length(); i++) {
		left.push(input[i]);
	}

	for (int i = 0; i < M; i++) {
		cin >> c;
		switch (c){
		case 'L':
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
			break;
		case 'D':
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
			break;
		case 'B':
			if (!left.empty()) {
				left.pop();
			}
			break;
		case 'P':
			cin >> P;
			left.push(P);
			break;
		}
	}

	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}

	while(!right.empty()) {
		cout << right.top();
		right.pop();
	}
}