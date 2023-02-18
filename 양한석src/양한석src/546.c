#include <stdio.h>
int main() {
	int n,score;
	float sum = 0;
	scanf("%d", &n);
	if (n <= 10) {
		for (int i = 0; i < n; i++) {
			scanf("%d", &score);
			sum += score;
		}
		printf("avg : %.1lf\n", sum / n);
		if (sum / n >= 80) {
			printf("pass");
		}
		else {
			printf("fail");
		}
	}
}