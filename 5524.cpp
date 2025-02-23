#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	string s;
	while (n--) {
		cin >> s;
		for (char c : s) {
			if (c >= 'a') cout << c;
			else cout << (char)(c - 'A' + 'a');
		}
		cout << endl;
	}
}