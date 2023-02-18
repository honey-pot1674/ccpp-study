#include <stdio.h>

int main() {
	int a, b, c, d, e;
	scanf("%d %d %d", &a, &b, &c);
	d = a + b + c;
	e = (a + b + c) % 3;
	printf("sum = %d\navg = %d",d,(d-e)/3);
}