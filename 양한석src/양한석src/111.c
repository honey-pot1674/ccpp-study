#include <stdio.h>
int main() {
	int a, b, c, d, e;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	e = (a + b + c + d) % 4;
	printf("sum %d\navg %d",a+b+c+d,(a+b+c+d-e)/4);
}