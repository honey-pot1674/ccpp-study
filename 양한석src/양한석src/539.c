#include <stdio.h>

int main() {
	int n = 0;
	double sum = 0;
	int i;
	float avg;
	for (i = 1; i++;) {
		scanf("%d", &n);
		sum += n;
		if (n >= 100) {
			break;
		}
	}
	
	avg = sum / (i-1);
	printf("%.0lf\n%.1lf", sum, avg);
}