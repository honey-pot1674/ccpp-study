#include <stdio.h>
#include <math.h>
#define FIRST(x,y) printf("(%.0lf - %.0lf) ^ 2 =. %0lf\n",x,y,pow((x-y),2));
#define SECOND(x,y) printf("(%.0lf + %.0lf) ^ 3 = %.0lf",x,y,pow((x+y),3));

int main() {
	double m, n;
	scanf("%lf %lf", &m, &n);
	FIRST(m, n);
	SECOND(m, n);
}