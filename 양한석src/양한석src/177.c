#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	printf("%d", abs(a) + abs(b) + abs(c) + abs(d) + abs(e));
}