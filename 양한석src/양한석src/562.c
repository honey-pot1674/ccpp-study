#include <stdio.h>
int main() {
	int grp[11];
	int sum_e=0;
	double avg_o=0;
	for (int i = 0; i < 10; i++) {
		scanf(" %d", &grp[i]);
	}
	for (int i = 1; i < 10; i += 2) {
		sum_e += grp[i];
	}
	for (int i = 0; i < 10; i += 2) {
		avg_o += grp[i];
	}
	avg_o /= 5;
	printf("sum : %d\navg : %.1lf", sum_e, avg_o);
}