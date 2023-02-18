#include <stdio.h>
int main() {
	int m, n, num = 1;
	int arr[100][100] = { 0 };
	scanf("%d %d", &n, &m);

	if (m == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				arr[i][j] = num;
			}
			num++;
		}
	}
	else if (m == 2) {
		for (int i = 0; i < n; i++) {
			if (i % 2 == 0) {
				for (int j = 0; j < n; j++) {
					arr[i][j] = num++;
				}
			}
			else {
				for (int j = n - 1; j >= 0; j--) {
					arr[i][j] = num++;
				}
			}
			num = 1;
		}
	}
	else {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				arr[i-1][j-1] = i * j;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}