#include <stdio.h>
#include <string.h>
#define STRSWAP(x,y) strcpy(tmp,x); strcpy(x,y); strcpy(y,tmp)
int main() {
	char words[10][100] = { 0 }, ltr, tmp[100] = { 0 }, have[10][100] = { 0 };
	int line = 0, dic;
	for (int i = 0; i < 10; i++) {
		scanf(" %s", words[i]);
	}
	scanf(" %c", &ltr);
	for (int i = 0; i < 10; i++) {
		if (strchr(words[i], ltr) != 0) {
			strcpy(have[line++], words[i]);
		}
	}
	for (int i = 0; i < line-1; i++) {
		dic = i;
		for (int j = dic + 1; j < line; j++) {
			if (strcmp(have[dic], have[j]) > 0) {
				dic = j;
			}
		}
		STRSWAP(have[i], have[dic]);
	}
	for (int i = 0; i < line; i++) {
		printf("%s\n", have[i]);
	}
}