#include <stdio.h>
int main() {
	int i, l[100], n;
	for (i = 0; i < 100; i++) {
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n % 2 == 0) {
			l[i] = n / 2;
		}
		else {
			l[i] = n * 2;
		}
	}
	printf("%d\n", i);
	for (int j = 0; j < i; j++) {
		printf("%d ", l[j]);
	}
}