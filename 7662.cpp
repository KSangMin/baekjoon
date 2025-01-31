#include<iostream>
#include<set>
#include<vector>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;
	while (t--) {
		multiset<int> s;
		vector<pair<char, int>> coms;
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			char com;
			int num;
			cin >> com >> num;
			coms.push_back({ com, num });
		}

		for (int i = 0; i < n; i++) {
			int com = coms[i].first;
			int num = coms[i].second;
			if (com == 'I') s.insert(num);
			else {
				if (s.empty()) continue;
				if (num == -1) s.erase(s.begin());
				else s.erase(--s.end());
			}
		}

		if (s.empty()) cout << "EMPTY" << "\n";
		else cout << *s.rbegin() << " " << *s.begin() << "\n";
	}

	return 0;
}