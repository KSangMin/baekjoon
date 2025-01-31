#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool cmp(int a, int b) {
	return a > b;
}

int main() {
	int b, c, d;
	cin >> b >> c >> d;
	vector<int> burger(b, 0);
	vector<int> side(c, 0);
	vector<int> drink(d, 0);
	for (int i = 0; i < b; i++) cin >> burger[i];
	for (int i = 0; i < c; i++) cin >> side[i];
	for (int i = 0; i < d; i++) cin >> drink[i];

	sort(burger.begin(), burger.end(), cmp);
	sort(side.begin(), side.end(), cmp);
	sort(drink.begin(), drink.end(), cmp);

	int sum = 0, sale = 0, minN = min({ b,c,d });
	for (int i = 0; i < b; i++) {
		sum += burger[i];
		if (i < minN) sale += burger[i] * 0.9;
		else sale += burger[i];
	}
	for (int i = 0; i < c; i++) {
		sum += side[i];
		if (i < minN) sale += side[i] * 0.9;
		else sale += side[i];
	}
	for (int i = 0; i < d; i++) {
		sum += drink[i];
		if (i < minN) sale += drink[i] * 0.9;
		else sale += drink[i];
	}

	cout << sum << "\n" << sale;

	return 0;
}