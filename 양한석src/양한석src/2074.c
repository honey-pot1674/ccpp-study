#include <stdio.h>
int main() {
	int n, arr[100][100] = { {0} }, num = 1, x = 0, y = 0;
	int bx = 0, by = 0;
	scanf("%d", &n);
	if (n > 2 && n < 100 && n % 2 == 1) {
		x = (n - 1) / 2;
		arr[y][x] = num++;
		for (;;) {
			if (y - 1 < 0) {
				y = n - 1;
			}
			else {
				--y;
			}
			if (x - 1 < 0) {
				x = n - 1;
			}
			else {
				--x;
			}
			if (arr[y][x] != 0) {
				y = by + 1;
				x = bx;
			}
			arr[y][x] = num++;
			bx = x;
			by = y;
			if (num > n * n) {
				break;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				printf("%5d", arr[i][j]);
			}
			printf("\n");
		}
	}
}