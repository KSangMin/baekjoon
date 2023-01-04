#include <iostream>
using namespace std;

int main(void) {
	string pal = "";
	int length = 0;
	bool result = true;

	while (true) {
		cin >> pal;
		if (pal == "0") { break; }
		length = pal.length();
		result = true;

		for (int i = 0; i < length/2; i++) {
			if (pal[i] != pal[length - i - 1]) {
				result = false;
			}
		}
		if (result == false) {
			cout << "no\n";
		}
		else {
			cout << "yes\n";
		}
	}

	return 0;
}