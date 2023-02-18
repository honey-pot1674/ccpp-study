#include <stdio.h>

int main() {
	int n;
	int* p;
	p = &n;
	scanf("%d", p);
	for (int i = 0; i < *p; i++) {
		printf("*");
	}
}