#include <stdio.h>
int main() {
	int n;
	int m = 0;
	float sum = 0;
	scanf("%d", &n);
	if (n <= 100) {
		for (int i =0; i < n; i++) {
			scanf("%d", &m);
			sum += m;
		}
		printf("%.2lf", sum / n);
	}
}