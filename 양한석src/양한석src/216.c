#include <stdio.h>
#include <string.h>
int main() {
	char str[21] = { 0 };
	for (;;) {
		scanf(" %s", str);
		if (strcmp(str, "END") == 0) {
			break;
		}
		for (int j = strlen(str)-1; j >= 0; j--) {
			printf("%c", str[j]);
		}
		printf("\n");
	}
}