#include <stdio.h>
int main() {
	int n, alpha = 0;
	int x, y;
	char sqr[100][100];

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			sqr[i][j] = 32;
		}
	}
	scanf("%d", &n);
	if (n % 2 == 0||n>100) {
		printf("INPUT ERROR");
	}
	else {
		for (int i = (n + 1) / 2; i >= 0; i--) {
			x = i;
			y = i;
			for (int j = i; j < n-i; j++) {
				sqr[y++][x] = 65 + (alpha++) % 26;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%c ", sqr[i][j]);
			}
			printf("\n");
		}
	}
}