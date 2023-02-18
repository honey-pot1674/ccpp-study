#include <stdio.h>

int main() {
	int n;
	for (;;) {
		printf("ASCII code =? ");
		scanf(" %d", &n);
		if (n > 32 && n < 128) {
			printf("%c\n", n);
		}
		else {
			break;
		}
	}
}