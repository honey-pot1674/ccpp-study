#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool* need;
int** count;
int num[101] = { 0 };
int n;
void toy(int x) {

	if (need[x]) {
		++num[x];	
		return;
	}

	for (int i = 1; i <= n; i++) {
		if (count[x][i] != 0) {
			for (int j = 0; j < count[x][i]; j++) toy(i);
		}			
	}
	return;
}

int main() {
	int m, x, y, k;

	scanf("%d", &n);
	need = malloc(sizeof(bool) * (n + 1));
	count = (int**)malloc(sizeof(int*) * (n + 1));

	for (int i = 1; i <= n; i++) {
		need[i] = true;
		count[i] = malloc(sizeof(int) * (n + 1));
		for (int j = 0; j <= n; j++) count[i][j] = 0;
	}

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf(" %d %d %d", &x, &y, &k);
		need[x] = false;
		count[x][y] = k;

	}
	toy(n);
	for (int i = 1; i <= n; i++) {
		if (need[i]) {
			printf("%d %d\n", i, num[i]);
		}
	}
}