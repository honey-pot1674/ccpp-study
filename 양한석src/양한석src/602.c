#include <stdio.h>
int main() {
	char n[5][30] = { 0 };
	for (int i = 0; i < 5; i++) {
		scanf("%s", n[i]);
	}
	for (int i = 4; i >= 0; i--) {
		printf("%s\n", n[i]);
	}
}