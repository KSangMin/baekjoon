#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N = 0;
	cin >> N;
	vector<int> coo(N, 0);
	vector<int> order;
	
	for (int i = 0; i < N; i++) {
		cin >> coo[i];
		order.push_back(coo[i]);
	}

	sort(order.begin(), order.end());
	order.erase(unique(order.begin(), order.end()), order.end());

	for (int i = 0; i < N; i++) {
		cout << lower_bound(order.begin(), order.end(), coo[i]) - order.begin() << " ";
	}
	cout << "\n";

	return 0;
}