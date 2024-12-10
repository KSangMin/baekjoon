#include <iostream>
#include <stack>
using namespace std;


int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<char> left, right;
	int L = 0;
	string input = "";
	char c = ' ';

	cin >> L;

	for (int i = 0; i < L; i++) {
		while (!left.empty()) {
			left.pop();
		}
		while (!right.empty()) {
			right.pop();
		}

		cin >> input;
		for (int j = 0; j < input.length(); j++) {
			switch (input[j]) {
			case '<':
				if (!left.empty()) {
					right.push(left.top());
					left.pop();
				}
				break;
			case '>':
				if (!right.empty()) {
					left.push(right.top());
					right.pop();
				}
				break;
			case '-':
				if (!left.empty()) {
					left.pop();
				}
				break;
			default:
				left.push(input[j]);
				break;
			}
		}

		while (!left.empty()) {
			right.push(left.top());
			left.pop();
		}

		while (!right.empty()) {
			cout << right.top();
			right.pop();
		}
		cout << "\n";
	}
}