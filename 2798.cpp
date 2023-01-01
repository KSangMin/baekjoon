#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n = 0, m = 0, max = 0;;
	vector<int> card;

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		int each;
		cin >> each;
		card.push_back(each);
	}
	
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				int result = card[i] + card[j] + card[k];
				if (result > m) {
					continue;
				}
				if (result > max) {
					max = result;
				}
			}
		}
	}

	cout << max;

	return 0;
}