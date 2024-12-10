#include<iostream>
#include<stack>
using namespace std;

int main(void) {
	int card[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int A = 0, B= 0;
	stack<int> temp;

	for (int i = 0; i < 10; i++) {
		cin >> A >> B;
		for (int j = A; j <= B; j++) {
			temp.push(card[j]);
		}
		for (int j = A; j <= B; j++) {
			card[j] = temp.top();
			temp.pop();
		}
	}

	for (int i = 1; i <= 20; i++) {
		cout << card[i] << " ";
	}

	return 0;
}