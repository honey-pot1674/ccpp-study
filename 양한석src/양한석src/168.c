#include <stdio.h>
int main() {
	int pasc[100][100] = { {0} };
	int n;
	scanf("%d", &n);
	pasc[0][1] = 1;
	for (int i = 1; i < n; i++) {
		for (int j = 1; j <= i+1; j++) {
			pasc[i][j] = pasc[i- 1][j-1] + pasc[i -1][j];
		}
	}
	for (int i = n-1; i >= 0; i--) {
		for (int j = 1; j < n+1; j++) {
			if (pasc[i][j] != 0) {
				printf("%d ", pasc[i][j]);
			}
		}
		printf("\n");
	}
}