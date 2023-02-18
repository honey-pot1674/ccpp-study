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
	for (int i = 0; i < n; i++) {
		x = n-1;
		y = i;
		for (int j = n - i; j > 0; j--) {
			sqr[y++][x--] = 65 + (alpha++) % 26;
		}	
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%c ", sqr[i][j]);
		}
		printf("\n");
	}
}