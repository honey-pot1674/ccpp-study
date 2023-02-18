#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	double hap=0, avg;
	scanf("%d", &n);
	double* arr = malloc(sizeof(double) * n);
	for (int i = 0; i < n; i++) {
		scanf("%lf", &arr[i]);
		hap = hap + arr[i];
	}

	avg = hap / n;
	for (int i = 0; i < n; i++) {
		printf("%.2lf ", arr[i]);
	}
	printf("\nhap : %.2lf\n", hap);
	printf("avg : %.2lf", avg);
}