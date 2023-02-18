#include <stdio.h>
#include <stdlib.h>

int main() {
	int N;
	scanf("%d", &N);
	int sum = 0, large = 0, cmp;
	for (int i = 0; i < N; i++) {
		scanf(" %d", &cmp);
		sum += cmp;
		if (sum < 0) {
			sum = 0;
		}
		if (sum > large) {
			large = sum;
		}
	}
	printf("%d", large);
}