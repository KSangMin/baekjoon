#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int N = 0, result = 0;
	cin >> N;
	int i = 666;

	while (N) {
		if (to_string(i).find("666") != string::npos) {
			N--;
			result = i;
		}
		i++;
	}

	cout << result;

	return 0;
}