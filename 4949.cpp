#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(void) {
	int T = 0, small = 0, big = 0;
	string story = "";
	stack<char> recent;
	recent.push(' ');

	while (true) {
		getline(cin, story);
		if (story == ".") { break; }
		small = big = 0;
		for (int j = 0; j < story.length(); j++) {
			if (story[j] == '(') {
				recent.push('(');
				small++;
			}
			else if (story[j] == ')') {
				small--;
				if (recent.top() != '(') { break; }
				recent.pop();
			}
			else if (story[j] == '[') {
				recent.push('[');
				big++;
			}
			else if (story[j] == ']') {
				big--;
				if (recent.top() != '[') { break; }
				recent.pop();
			}

			if (small < 0 || big < 0) { break; }
		}

		if (small == 0 && big == 0) { cout << "yes" << endl; }
		else { cout << "no" << endl; }
	}

	return 0;
}