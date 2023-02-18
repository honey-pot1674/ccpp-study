#include <stdio.h>
#include <math.h>
#define SWAP(x,y) tmp=x; x=y; y=tmp;
double tmp;
double compare(double n, double n2, double n3) {
	if (n < n2) {
		SWAP(n, n2);
	}
	if (n < n3) {
		SWAP(n, n3);
	}
	if (n2 > n3) {
		SWAP(n2, n3);
	}
	printf("%.0lf %.0lf %.0lf", ceil(n), floor(n2), round(n3));
}
int main() {
	double n, n2, n3;
	scanf("%lf %lf %lf", &n, &n2, &n3);
	compare(n, n2, n3);
}