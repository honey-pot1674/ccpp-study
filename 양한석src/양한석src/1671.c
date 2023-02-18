#include <stdio.h>
int main() {
	int n, D = 0;
	int x, y;
	int paper[101][101] = { {0} };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf(" %d %d", &x, &y);
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (paper[k][j] == 0) {
					paper[k][j] = 1;
				}
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1) {
				if (paper[i - 1][j] == 0) {
					++D;
				}
				if (paper[i + 1][j] == 0) {
					++D;
				}
				if (paper[i][j - 1] == 0) {
					++D;
				}
				if (paper[i][j + 1] == 0) {
					++D;
				}
			}
		}
	}
	printf("%d", D);
}