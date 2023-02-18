#include <stdio.h>
int main() {
	int n, i, j,x=0,y=0, arr[101][101] = { {0} },num=1;
	scanf("%d", &n);
	arr[y][x] = num++;
	for (;;) {
		////////////////////////////////////
		if (y + 1 < n) {
			arr[++y][x] = num++;
		}
		else {
			arr[y][++x] = num++;
		}
		if (num > n*n) {
			break;
		}
		////////////////////////////////////
		for (; y - 1 >= 0 && x<n-1 && num <= n * n;) {
			arr[--y][++x] = num++;
		}
		if (num > n * n) {
			break;
		}
		////////////////////////////////////
		if (x + 1 < n) {
			arr[y][++x] = num++;
		}
		else {
			arr[++y][x] = num++;
		}
		if (num > n * n) {
			break;
		}
		////////////////////////////////////
		for (; x - 1 >= 0 && y<n-1 && num<=n*n;) {
			arr[++y][--x] = num++;
		}
		if (num > n * n) {
			break;
		}
		////////////////////////////////////
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}