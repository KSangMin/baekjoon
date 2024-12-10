#include<iostream>
using namespace std;

int main(void) {
	int T = 0, count = 0;
	string VPS = "";
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> VPS;
		count = 0;
		for (int j = 0; j < VPS.length(); j++) {
			if (VPS[j] == '(') { count++; }
			else if (VPS[j] == ')') { count--; }

			if (count < 0) { break; }
		}
		if (count == 0) { cout << "YES" << endl; }
		else { cout << "NO" << endl; }
	}

	return 0;
}