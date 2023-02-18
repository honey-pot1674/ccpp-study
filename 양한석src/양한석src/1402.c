#include <stdio.h>
int main() {
	int n, k, ot;
	scanf("%d %d", &n, &k);
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			ot = i;
			--k;
		}
		if (k == 0) {
			break;
		}
	}
	if (k == 0) {
		printf("%d", ot);
	}
	else {
		printf("0");
	}
}