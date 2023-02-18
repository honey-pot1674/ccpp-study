#include <stdio.h>
#include <math.h>
int main() {
	int num = 0, n, x = 0, y = 0, arr[201][201] = { {0} };
	scanf("%d", &n);
	for (int i=n; i>=0 ;i--) {
		for (int j=0; j<2*i-1;j++) {
			arr[y++][x] = (num++) % 26 + 65;
		}
		y -= 2;
		for (int j=0; j < i - 1; j++) {
			x += 2;
			arr[y--][x] = (num++) % 26 + 65;
		}
		for (int j=0; j < i - 2; j++) {
			x -= 2;
			arr[y--][x] = (num++) % 26 + 65;
		}
		x--;
		y++;
	}
	for (int i = 0; i < 2 * n - 1; i++) {
		for (int j = 0; j < abs(n - i - 1); j++) {
			printf("  ");
		}
		for (int j = 0; j < 2 * n - 1;j++) {
			if (arr[i][j] != 0) {
				printf("%c ", arr[i][j]);
			}
		}
		printf("\n");
	}
}