#include <stdio.h>
int main() {
	int sqr[100][100] = { {0} };
	int x = 0, y = 0;
	int n, num = 1;
	scanf("%d", &n);
	sqr[y][x] = num++;
	if (n <= 100 || n >= 1) {
		for (;;) {
			if (y + 1 >= n) {
				sqr[y][++x] = num++;
			}
			else {
				sqr[++y][x] = num++;
			}
			if (num > n * n) {
				break;
			}
			for (; y - 1 >= 0 && x + 1 < n && num <= n * n; ) {
				sqr[--y][++x] = num++;
			}
			if (num > n * n) {
				break;
			}
			if (x + 1 >= n) {
				sqr[++y][x] = num++;
			}
			else {
				sqr[y][++x] = num++;
			}
			if (num > n * n) {
				break;
			}
			for (; x - 1 >= 0 && y + 1 < n && num <= n * n; ) {
				sqr[++y][--x] = num++;
			}
			if (num > n * n) {
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", sqr[i][j]);
			}
			printf("\n");
		}
	}
}