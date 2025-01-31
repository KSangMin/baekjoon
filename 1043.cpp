#include<iostream>
#include<vector>

using namespace std;

vector<vector<int>> participant;
vector<bool> knowing(51, false);

int main() {
	int people, party, truth;
	cin >> people >> party >> truth;

	for (int i = 0; i < truth; i++) {
		int t;
		cin >> t;
		knowing[t] = true;
	}

	for (int i = 0; i < party; i++) {
		int n;
		cin >> n;
		vector<int> temp;
		while (n--) {
			int person;
			cin >> person;
			temp.push_back(person);
		}
		participant.push_back(temp);
	}

	for (int i = 0; i < party; i++) {
		for (int j : participant[i]) {

		}
	}

	return 0;
}