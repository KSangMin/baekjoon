#include<stdio.h>
#include<algorithm>
using namespace std;

int main(void) {
	int N = 0, each = 0;
	int numbers[1000000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &numbers[i]);
	}

	sort(numbers, numbers + N);

	for (int i = 0; i < N; i++) {
		printf("%d\n", numbers[i]);
	}
	
	return 0;
}