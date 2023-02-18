#include <stdio.h>
int main() {
	int capital[3][5];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			scanf(" %c", &capital[i][j]);
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%c ", capital[i][j] + 32);
		}
		printf("\n");
	}
}