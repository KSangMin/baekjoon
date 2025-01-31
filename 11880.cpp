#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;

	while (n--) {
		ios::sync_with_stdio(false);
		cin.tie(NULL);

		long long a, b, c, maxN, other;
		cin >> a >> b >> c;
		maxN = max({ a,b,c });
		if (maxN == a) other = b + c;
		else if (maxN == b) other = c + a;
		else other = a + b;
		cout << maxN * maxN + other * other << "\n";
	}

	return 0;
}