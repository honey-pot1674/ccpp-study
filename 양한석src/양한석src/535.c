#include <stdio.h>
int main() {
	double a;
	scanf("%lf", &a);
	if (a > 4.5) {
		printf("error");
	}
	else if (a >= 4.0) {
		printf("scholarship");
	}
	else if (a >= 3.0) {
		printf("next semester");
	}
	else if (a >= 2.0) {
		printf("seasonal semester");
	}
	else if (a < 2.0) {
		printf("retake");
	}
}