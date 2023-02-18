#include <stdio.h>
#include <stdlib.h>
#define PI 3.141592

int main() {
	double r;
	printf("radius : ");
	scanf("%lf", &r);
	printf("area = %.3lf", r*r*PI);
}