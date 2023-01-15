#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int compare(pair<int, string> a, pair<int, string> b) {
	return a.first < b.first;
}

int main(void) {
	int N = 0;
	cin >>  N;
	vector<pair<int,string>> members(N);

	for (int i = 0; i < N; i++) {
		cin >> members[i].first >> members[i].second;
	}

	stable_sort(members.begin(), members.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << members[i].first << " " << members[i].second << "\n";
	}
	

	return 0;
}