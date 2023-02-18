#include <stdio.h>
#include <string.h>
#define SWAP(x,y) strcpy(tmp,x); strcpy(x,y); strcpy(y,tmp)

int main() {
	char a[3][11] = { {0} };
	int b = 0;
	char tmp[11];
	for (int i = 0; i < 3; i++) {
		scanf(" %s", &a[i]);
	}


	for (int i = 0; i < 3; i++) {
		b = i;
		for (int j = i + 1; j < 3; j++) {
			if (strcmp(a[b],a[j])>0) {
				b = j;
			}
		}
		SWAP(a[i], a[b]);
	}
	printf("%s", a[0]);
}