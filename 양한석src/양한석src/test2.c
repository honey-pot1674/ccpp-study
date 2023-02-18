#include <stdio.h>
int main() {
	int pas[30][31]={ {0} };
	int n;
	int x = 1, y = 0;
	scanf("%d", &n);
	if (n <= 30) {
		pas[0][1] = 1;
		for (int i = 1; i < n; i++) {
			for (int j = 1; j <= i + 1; j++) {
				pas[i][j] = pas[i - 1][j] + pas[i - 1][j - 1];
			}
		}
		for (int i = n; i > 0; i--) {
			for (int j = n - 1; j >= 0; j--) {
				if (pas[j][i] != 0) {
					printf("%d ", pas[j][i]);
				}
			}
			printf("\n");
		}
	}
}