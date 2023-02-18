#include <stdio.h>
int main() {
	int h, w;
	scanf("%d %d", &h, &w);
	printf("%d",w+100-h);
	if (w + 100 - h > 0) {
		printf("\nObesity");
	}
}