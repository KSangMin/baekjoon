#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	int sX = 0, sY = 0;
	vector<pair<int, int>> region;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int temp;
			cin >> temp;
			if (temp == 2) {
				sX = i;
				sY = j;
			}
			else if (temp == 1) {
				region.push_back({ i,j });
			}
		}
	}

	for(pair<int, int> p : region) {
		if ((sX + sY) % 2 == (p.first + p.second) % 2) {
			cout << "Kiriya";
			return 0;
		}
	}

	cout << "Lena";

	return 0;
}