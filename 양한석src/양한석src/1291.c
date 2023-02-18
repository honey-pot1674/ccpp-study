#include <stdio.h>
int main() {
	int s, e;
	for (;;) {
		scanf("%d %d", &s, &e);
		if (s < 2 || s > 9 || e < 2 || e > 9) {
			printf("INPUT ERROR!\n");
		}
		else {
			if (s < e) {
				for (int i = 1; i < 10; i++) {
					for (int j = s; j <= e; j++) {
						printf("%d * %d = %2d   ", j, i, j * i);
					}
					printf("\n");
				}
			}
			else {
				for (int i = 1; i < 10; i++) {
					for (int j = s; j >= e; j--) {
						printf("%d * %d = %2d   ", j, i, j * i);
					}
					printf("\n");
				}
			}
			break;
		}
	}
}