#include <stdio.h>
int main() {
	int n,x=0;
	scanf("%d", &n);
	if (n % 2 == 0 || n > 100) {
		printf("INPUT ERROR!");
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (i <= (n + 1) / 2) {
				x++;
			}
			else {
				x--;
			}
			for (int j = 1; j < x; j++) {
				printf(" ");
			}
			for (int j = 0; j < 2*x-1; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}