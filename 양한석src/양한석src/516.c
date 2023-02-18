#include <stdio.h>

int main() {
	double a, b;
	char c;
	scanf("%lf ", &a);
	scanf("%lf ", &b);
	scanf("%c", &c);
	printf("%.2lf\n%.2lf\n%c", a, b, c);
}