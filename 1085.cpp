#include<iostream>
using namespace std;

int main(void) {
	int x = 0, y = 0, w = 0, h = 0;
	cin >> x >> y >> w >> h;

	cout << min(min(x, y), min(w - x, h - y));

	return 0;
}