#include <stdio.h>
double pi(double r) {
	return 3.14 * r * r;
}

int main(){
	double r,s;
	scanf("%lf", &r);
	s = pi(r);
	printf("%.2lf", s);
}