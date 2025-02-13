#include<iostream>
#include<string>

using namespace std;

int main() {
	string s;
	getline(cin, s);
	
	for (int i = 0; i < s.length() - 1; i++) {
		if ((s[i] == 'd' || s[i] == 'D') && s[i + 1] == '2') {
			cout << "D2";
			return 0;
		}
	}

	cout << "unrated";

	return 0;
}