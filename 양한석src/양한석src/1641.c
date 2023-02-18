#include <stdio.h>
int main() {
	int n, m, num = 1,x=0;
	scanf("%d %d", &n, &m);
	if (m > 3 || n % 2 == 0 || n > 100) {
		printf("INPUT ERROR!");
	}
	else {
		if (m == 1) {
			for (int i = 0; i < n; i++) {
				if (i % 2 == 1) {
					num += i;
					for (int j = 0; j <= i; j++) {
						printf("%d ", num--);
					}
					num += i+2;
				}
				else {
					for (int j = 0; j <= i; j++) {
						printf("%d ", num++);
					}
				}
				printf("\n");
			}
		}
		else if (m == 2) {
			num = 0;
			for (int i = n; i > 0; i--) {
				for (int j = 0; j < n - i; j++) {
					printf("  ");
				}
				for (int j = 0; j < 2 * i - 1; j++) {
					printf("%d ", num);
				}
				num++;
				printf("\n");
			}
		}
		else if (m == 3) {
			for (int i = 1; i <= n; i++) {
				if (i <= (n + 1) / 2) {
					x++;
				}
				else {
					x--;
				}
				for (int j = 0; j < x; j++) {
					printf("%d ", num++);
				}
				num = 1;
				printf("\n");
			}
		}
	}
}