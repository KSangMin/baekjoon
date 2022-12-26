#include <iostream>
using namespace std;

int main(void) {
	int sum = 0,
		num = 0,
		price[100] = { 0 },
		each_num[100] = { 0 };
	cin >> sum >> num;

	for (int i = 0; i < num; i++) {
		cin >> price[i] >> each_num[i];
		sum -= price[i] * each_num[i];
	}
	
	cout << ((sum == 0) ? "Yes" : "No");
	return 0;
}