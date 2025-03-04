#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int n, a, b, c, m = 0;
	cin >> n;
	while (n--) {
		cin >> a >> b >> c;
		if (a == b && b == c)m = max(m, 10000 + a * 1000);
		else if (a == b && b != c)m = max(m, 1000 + a * 100);
		else if (a == c && b != c)m = max(m, 1000 + c * 100);
		else if (b == c && a != c)m = max(m, 1000 + b * 100);
		else m = max(m, 100 * max({ a,b,c }));
	}

	cout << m;

	return 0;
}