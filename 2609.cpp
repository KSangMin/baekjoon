#include <iostream>
using namespace std;

int main(void) {
	int a = 0, b = 0, GCD = 1, LCM = 1;
	cin >> a >> b;
	int min = a;
	if (b < min) { min = b; }

	for (int i = 2; i <= min; i++) {
		if (!((a % i) || (b % i))) { GCD = i; }
	}
	LCM = a * b / GCD;
	cout << GCD << endl << LCM << endl;
	return 0;
}