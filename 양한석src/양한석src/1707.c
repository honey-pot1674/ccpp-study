#include <stdio.h>
int main() {
	int num = 1, n, x = 0, y = 0, arr[101][101] = { {0} };
	scanf("%d", &n);
	for (; num <= n * n;) {
		for (; arr[y][x] == 0 && x < n;) {
			arr[y][x++] = num++;
		}
		x--;
		y++;
		for (; arr[y][x] == 0 && y < n;) {
			arr[y++][x] = num++;
		}
		y--;
		x--;
		for (; arr[y][x] == 0 && x >= 0;) {
			arr[y][x--] = num++;
		}
		x++;
		y--;
		for (; arr[y][x] == 0 && y < n;) {
			arr[y--][x] = num++;
		}
		y++;
		x++;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}