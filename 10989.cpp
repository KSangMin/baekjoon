#include <stdio.h>

int main(void) {
	int N = 0;
	scanf("%d", &N);
	int numbers[10001] = { 0 };
	for (int i = 0; i < N; i++) {
		int n = 0;
		scanf("%d", &n);
		numbers[n] += 1;
	}

	for (int i = 1; i <= 10000; i++) {
		for (int j = 0; j < numbers[i]; j++) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}

