#include <stdio.h>
int main() {
	int n, S = 0;
	int x, y;
	int paper[100][100] = { {0} };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %d %d", &x, &y);
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (paper[j][k] == 0) {
					paper[j][k] = 1;
					++S;
				}
			}
		}
	}
	printf("%d\n", S);
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			printf("%d", paper[i][j]);
		}
		printf("\n");
	}
}