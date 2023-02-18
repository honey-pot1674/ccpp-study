#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SWAP(x,y) strcpy(tmp,x);strcpy(x,y);strcpy(y,tmp)
int main() {
	int n;
	char tmp[101];
	int f;
	scanf("%d", &n);
	char **str = malloc(sizeof(char*) *n);


	for (int i = 0; i < n; i++) {
		str[i] = malloc(sizeof(char) * 100);
		scanf("%s", str[i]);
	}

	for (int i = 0; i < n; i++) {
		f = i;
		for (int j = i + 1; j < n; j++) {
			if (strcmp(str[f], str[j]) > 0) {
				f = j;
			}
		}
		SWAP(str[f], str[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%s\n", str[i]);
	}
}