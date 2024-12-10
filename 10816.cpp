#include<iostream>
using namespace std;

int cards[20000001] = {};

int main(void) {
	int N = 0, M = 0 , card = 0;

	cin >> N;
	for (int i = 0; i < N; i++) {
		scanf("%d", &card);
		cards[card + 10000000]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		scanf("%d", &card);
		cout << cards[card + 10000000] << " ";
	}

	return 0;
}