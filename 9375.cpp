#include<iostream>
#include<map>
using namespace std;

int main(void) {
	int T = 0, N = 0;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		map<string, int> clothes;
		for (int j = 0; j < N; j++) {
			string input = "";
			cin >> input >> input;
			clothes[input]++;
		}

		int result = 1;
		for (auto iter = clothes.begin(); iter != clothes.end(); ++iter) {
			result *= iter->second + 1;
		}

		cout << result - 1 << "\n";
	}

	return 0;
}