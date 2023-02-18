#include <stdio.h>
int main() {
	int snail[100][100];
	int n,out=0;
	int x = 0, y = 0;
	int loop = 0, nl = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			snail[i][j] = ' ';
		}
	}
	scanf("%d", &n);
	for (int j = 0;; j++) {
		for (int i = 0; i < n; i++) {
			if (snail[y][x] != 32 || x < 0 || y < 0) {
				break;
			}
			else {
				loop = 1;
			}
			snail[y++][x++] = out++ % 10;
			if (snail[y][x] != 32 || x < 0 || y < 0) {
				break;
			}
		}
		if (loop == 0) {
			nl += 1;
		}
		loop = 0;
		x--;
		y--;
		for (int i = 0; i < n; i++) {
			if (snail[y][x - 1] != 32 || x == 0 || y == 0) {
				break;
			}
			else {
				loop = 1;
			}
			snail[y][--x] = out++ % 10;
			if (snail[y][x - 1] != 32 || x == 0 || y == 0) {
				break;
			}
		}
		if (loop == 0) {
			nl += 1;
		}
		loop = 0;
		for (int i = 0; i < n; i++) {
			if (snail[y - 1][x] != 32 || x < 0 || y < 0) {
				break;
			}
			else {
				loop = 1;
			}
			snail[--y][x] = out++ % 10;
		}
		if (loop == 0) {
			nl += 1;
		}
		loop = 0;
		if (nl == 3) {
			break;
		}
		else {
			nl = 0;
			x++;
			y++;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (snail[i][j] != 32) {
				printf("%d ", snail[i][j]);
			}
		}
		printf("\n");
	}
}