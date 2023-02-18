#include <stdio.h>
int main() {
	int m, n, num = 1;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", num++);
		}
		printf("\n");
	}
}