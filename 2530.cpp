#include <iostream>
using namespace std;

int main(void) {
	int ch = 0, cm = 0, cs = 0, t = 0;
	cin >> ch >> cm >> cs >> t;

	cs += t % 60;
	t /= 60;
	if (cs > 59) {
		cs -= 60;
		cm++;
	}

	cm += t % 60;
	t /= 60;
	if (cm > 59) {
		cm -= 60;
		ch++;
	}

	ch += t % 24;
	if (ch > 23) {
		ch -= 24;
	}

	cout << ch << " " << cm << " " << cs;
	return 0;
}