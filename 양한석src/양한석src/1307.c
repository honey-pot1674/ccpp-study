#include <stdio.h>
int main() {
	int n,alpha=65;
	int sqr[100][100] = { 0 };
	scanf("%d", &n);
	for (int i = n - 1; i >= 0; i--) {
		for (int j = n - 1; j >= 0; j--) {
			sqr[j][i] = alpha++;
			if (alpha > 90) {
				alpha = 65;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c ", sqr[i][j]);
		}
		printf("\n");
	}
}