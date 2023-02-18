#include <stdio.h>
int main() {
	int m, n, num = 1;
	int arr[100][100] = { 0 };
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < m; j++) {
				arr[i][j] = num++;
			}
		}
		else {
			for (int j = m - 1; j >= 0; j--) {
				arr[i][j] = num++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}