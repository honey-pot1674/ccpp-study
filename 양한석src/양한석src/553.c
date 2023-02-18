#include <stdio.h>
int main() {
	int n,alpha=65;
	scanf("%d", &n);
	for (int i = n; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			printf("%c", alpha++);
		}
		printf("\n");
	}
}