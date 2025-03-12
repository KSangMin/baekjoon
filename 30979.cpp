#include<iostream>

using namespace std;

int main() {
	int t, n, c;
	cin >> t >> n;
	while (n--) {
		cin >> c;
		t -= c;
	}

	string answer = (t > 0) ? "Padaeng_i Cry" : "Padaeng_i Happy";
	cout << answer;

	return 0;
}