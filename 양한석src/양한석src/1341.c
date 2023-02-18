#include <stdio.h>
int main() {
	int s, e;
	for (;;) {
		scanf("%d %d", &s, &e);
		if (s < 2 || s > 9 || e < 2 || e > 9) {
			printf("INPUT ERROR!\n");
			break;
		}
		else {
			if (s < e) {
				for (int i = s; i <= e; i++) {
					for (int j = 1; j < 10; j++) {
						printf("%d * %d = %2d   ", i, j, j * i);
						if (j % 3 == 0) {
							printf("\n");
						}
					}
					printf("\n");
				}
			}
			else {
				for (int i = s; i >= e; i--) {
					for (int j = 1; j < 10; j++) {
						printf("%d * %d = %2d   ", i, j, j * i);
						if (j % 3 == 0) {
							printf("\n");
						}
					}
					printf("\n");
				}
			}
			break;
		}
	}
}