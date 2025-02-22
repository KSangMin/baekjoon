#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n, l, h;
	cin >> n >> l >> h;
	vector<int> score(n, 0);

	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}

	sort(score.begin(), score.end());

	double sum = 0;

	for (int i = l; i < n - h; i++) {
		sum += score[i];
	}

	double avg = sum / (n - l - h);

	cout.precision(15);
	cout << avg << endl;

	return 0;
}