#include <stdio.h>
int main() {
	int arr[100][100] = { {0} };
	int n,alp=0;
	int x = 0, y = 0;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			arr[i][j] = 32;
		}
	}
	scanf("%d", &n);
	if (n % 2 == 0||n>100||n<1) {
		printf("INPUT ERROR!");
	}
	else {
		for (int i = (n + 1) / 2; i >= 0; i--) {
			x = i;
			y = i;
			for (int j = i; j < n - i; j++) {
				arr[y++][x] = 65 + (alp++) % 26;
			}
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] != 32) {
					printf("%c ", arr[i][j]);
				}
			}
			printf("\n");
		}
	}
}