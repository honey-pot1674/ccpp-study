#include <stdio.h>
#include <string.h>

typedef struct Height {
	char name[20];
	int height;
}ki;

int main() {
	ki h[5];
	int small=0;

	for (int i = 0; i < 5; i++) {
		scanf(" %s %d", h[i].name, &h[i].height);
	}

	for (int i = 1; i < 5; i++) {
		if (h[small].height > h[i].height) {
			small = i;
		}
	}

	printf("%s %d", h[small].name, h[small].height);
}