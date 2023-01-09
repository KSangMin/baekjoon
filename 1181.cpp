#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(string a, string b) {
	if (a.length() == b.length()) {
		return a < b;
	}
	else {
		return a.length() < b.length();
	}
}

int main(void) {
	int N = 0;
	string word = "";
	cin >> N;
	vector<string> words(N,"");
	for (int i = 0; i < N; i++) {
		cin >> words[i];
	}

	sort(words.begin(),words.end(), compare);
	words.erase(unique(words.begin(), words.end()), words.end());

	for (int i = 0; i < words.size(); i++) {
		cout << words[i] << endl;
	}

	return 0;
}