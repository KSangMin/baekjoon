#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	stack<pair<int, int>> tower;
	int N = 0, temp = 0;

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		while (!tower.empty()) {
			if (tower.top().second > temp) {
				break;
			}
			else {
				tower.pop();
			}
		}

		if (tower.empty()) {
			cout << 0;
		}
		else {
			cout << tower.top().first;
		}
		cout << " ";
		
		tower.push(pair<int,int>(i,temp));
	}
}