#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	int N = 0, M = 0;
	cin >> N >> M;
	vector<string> nHrd(N, "");
	vector<string> nHrdSn;
	string input;

	for (int i = 0; i < N; i++) {
		cin >> nHrd[i];
	}
	sort(nHrd.begin(), nHrd.end());

	for (int i = 0; i < M; i++) {
		int min = 0, max = N - 1;
		cin >> input;
		int j = 0;
		while (min  <= max) {
			j = (min + max) / 2;
			if (input < nHrd[j]) { max = j - 1; }
			else if (nHrd[j] < input) { min = j + 1; }
			else {
				nHrdSn.push_back(input);
				break;
			}
		}
	}

	sort(nHrdSn.begin(), nHrdSn.end());
	cout << nHrdSn.size() << "\n";
	for (int i = 0; i < nHrdSn.size(); i++) {
		cout << nHrdSn[i] << "\n";
	}

	return 0;
}