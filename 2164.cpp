#include<iostream>
#include<queue>
using namespace std;

int main(void) {
	int N = 0;
	cin >> N;
	queue<int> card;
	for (int i = 1; i <= N; i++) {
		card.push(i);
	}

	while (card.size() > 1) {
		card.pop();
		if (card.size() <= 1) { break; }
		card.push(card.front());
		card.pop();
	}

	cout << card.front();

	return 0;
}