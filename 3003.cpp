#include <iostream>
using namespace std;

int main(void) {
	int k, q, r, b, kn, p = 0;
	cin >> k >> q >> r >> b >> kn >> p;
	cout << 1 - k << ' ' << 1 - q << ' ' << 2 - r << ' ' << 2 - b << ' ' << 2 - kn << ' ' << 8 - p;
}