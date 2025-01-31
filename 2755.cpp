#include<iostream>
#include<map>

using namespace std;

map<string, float> score = { 
	{"A+", 4.3}, {"A0", 4.0}, {"A-", 3.7}
	, {"B+", 3.3}, {"B0", 3.0}, {"B-", 2.7}
	, {"C+", 2.3}, {"C0", 2.0}, {"C-", 1.7}
	, {"D+", 1.3}, {"D0", 1.0}, {"D-", 0.7}, {"F", 0.0}
};

int main() {
	int n, cnt = 0;
	float sum = 0;
	cin >> n;
	while (n--) {
		string a, c;
		int b;
		cin >> a >> b >> c;
		cnt += b;
		sum += score[c] * b;
	}

	cout << fixed;
	cout.precision(2);
	cout << sum / cnt;

	return 0;
}