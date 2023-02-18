#include <stdio.h>

int work(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			printf("%d ", j * i);
		}
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	work(n);
}