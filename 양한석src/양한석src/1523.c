#include <stdio.h>
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if (n > 100 || m < 1 || m>3) {
		printf("INPUT ERROR!");
	}
	else {
		if (m == 1) {
			for (int i = 1; i <= n; i++) {
				for (int j = 0; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 2) {
			for (int i = n; i > 0; i--) {
				for (int j = 0; j < i; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
		else if (m == 3) {
			for (int i = 1; i <= n; i++) {
				for (int j = 0; j < n - i; j++) {
					printf(" ");
				}
				for (int j = 0; j < 2 * i - 1; j++) {
					printf("*");
				}
				printf("\n");
			}
		}
	}
}