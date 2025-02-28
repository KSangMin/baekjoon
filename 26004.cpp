#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	map<char, int> alpha;

	for (char c : s) {
		alpha[c]++;
	}

	cout << min({ alpha['H'], alpha['I'], alpha['A'], alpha['R'], alpha['C'] });

	return 0;
}