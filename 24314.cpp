#include<iostream>

using namespace std;

int main() {
	float a1, a0, c, n0;
	cin >> a1 >> a0 >> c >> n0;
	
	if (a1 < c) cout << 0;
	else if (a1 == c && a0 < 0) cout << 0;
	else if (a1 * n0 + a0 >= c * n0) cout << 1;
	else cout << 0;

	return 0;
}