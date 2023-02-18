#include <stdio.h>

int main() {
	int m, n, o;
	int* p, * q, * r;
	p = &m;
	q = &n;
	r = &o;
	scanf("%d %d", p, q);
	*r = *p - *q;
	if (*r < 0) {
		*r *= -1;
	}
	printf("%d", *r);
}