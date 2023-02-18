#include <stdio.h>
int main() {
	int pasc[100][100] = { {0} };
	int n,m;
	scanf("%d %d", &n,&m);
	pasc[0][1] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i + 1; j++) {
			pasc[i][j] = pasc[i - 1][j - 1] + pasc[i - 1][j];
		}
	}
	if (m == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 1; j < n + 1; j++) {
				if (pasc[i][j] != 0) {
					printf("%d ", pasc[i][j]);
				}
			}
			printf("\n");
		}
	}
	else if (m == 2) {
		for (int i = n-1; i >= 0; i--) {
			for (int j = 1; j < n - i; j++) {
				printf(" ");
			}
			for (int j = 1; j < n + 1; j++) {
				if (pasc[i][j] != 0) {
					printf("%d ", pasc[i][j]);
				}
			}
			printf("\n");
		}
	}
	else if (m == 3) {
		for (int i = n; i >= 1; i--) {
			for (int j = n; j >= i-1; j--) {
				if (pasc[j][i] != 0) {
					printf("%d ", pasc[j][i]);
				}
			}
			printf("\n");
		}
	}
}