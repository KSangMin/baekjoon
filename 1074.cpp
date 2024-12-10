#include<iostream>
using namespace std;

int answer = 0, N = 0, r = 0, c = 0;

void FindOrder(int x, int y, int n) {
	if (r == y && c == x) {
		cout << answer << "\n";
		return;
	}

	if (x <= c && c < x + n && y <= r && r < y + n) {
		int mid = n / 2;
		FindOrder(x, y, mid);
		FindOrder(x + mid, y, mid);
		FindOrder(x, y + mid, mid);
		FindOrder(x + mid, y + mid, mid);
	}
	else answer += n * n;
}

int main(void) {
	cin >> N >> r >> c;

	FindOrder(0, 0, 1 << N);

	return 0;
}