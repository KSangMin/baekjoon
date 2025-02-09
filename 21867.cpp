#include<iostream>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;
	string answer = "";
	for (char c : s) {
		if (c != 'J' && c != 'A' && c != 'V') {
			answer += c;
		}
	}
	cout << (answer == "" ? "nojava" : answer);

	return 0;
}