#include <stdio.h>
int main() {
	int n, num = 1, arr[100][100] = { {0} };
	int x, y = 0;
	int bx, by;
	scanf("%d", &n);
	if (n < 100 && n>2 && n % 2 != 0) {
		x = (n - 1) / 2;
		arr[y][x] = num++;
		bx = x;
		by = y;
		for (; num <= n * n;) {
			if (x - 1 < 0) {
				x = n - 1;
			}
			else {
				--x;
			}
			if (y - 1 < 0) {
				y = n - 1;
			}
			else {
				--y;
			}
			if (arr[y][x] != 0) {
				y = by + 1;
				x = bx;
			}
			arr[y][x] = num++;
			bx = x;
			by = y;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%d ", arr[i][j]);
			}
			printf("\n");
		}
	}
}