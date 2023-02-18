#include <stdio.h>
int square(int n) {
	int o = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d ", o++);
		}
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	square(n);
}