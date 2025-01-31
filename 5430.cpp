#include<iostream>
#include<queue>
#include<string>
#include<sstream>

using namespace std;

void Split(deque<int>& arr, string& ar) {
	string token;
	stringstream ss(ar.substr(1, ar.size() - 2));

	while (getline(ss, token, ',')) {
		arr.push_back(stoi(token));
	}

	return;
}

void Command(string& com, deque<int>& arr) {
	bool reverse = false;

	for (char c : com) {
		if (c == 'R') {
			reverse = !reverse;
		}
		else if (c == 'D') {
			if (arr.empty()) {
				cout << "error" << "\n";
				return;
			}
			if (reverse) arr.pop_back();
			else arr.pop_front();
		}
		else continue;
	}

	cout << "[";
	if (!arr.empty()) {
		if (reverse) {
			cout << arr.back();
			for (int i = arr.size() - 2; i >= 0; i--) {
				cout << "," << arr[i];
			}
		}
		else {
			cout << arr.front();
			for (int i = 1; i < arr.size(); i++) {
				cout << "," << arr[i];
			}
		}
	}
	cout << "]\n";

	return;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		string com, ar;
		int n;
		cin >> com >> n >> ar;
		deque<int> arr;

		Split(arr, ar);

		Command(com, arr);
	}

	return 0;
}