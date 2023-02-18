#include <stdio.h>
#include <string.h>
int main() {
	char str[5][15] = { {0} };
	char sero[75] = { 0 };
	int cnt = 0;
	for (int i = 0; i < 5; i++) {
		scanf(" %s", str[i]);
	}
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (str[j][i] != 0) {
				sero[cnt++] = str[j][i];
			}
		}
	}
	printf("%s", sero);
}