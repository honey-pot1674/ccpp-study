#include <stdio.h>
int main() {
	int n, alpha = 65, m=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = n; j > i; j--) {
			printf("%c ", alpha++);
		}
		for (int j = i; j > 0; j--) {
			printf("%d ", m++);
		}
		printf("\n");
	}
}