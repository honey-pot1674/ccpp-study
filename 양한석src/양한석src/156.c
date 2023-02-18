#include <stdio.h>
int main() {
	int max=0, min=0, n;
	scanf("%d", &n);
	max = n;
	min = n;
	for (int i = 0;i<99; i++) {
		scanf("%d", &n);
		if (n == 999) {
			break;
		}
		if (n > max) {
			max = n;
		}
		if (n < min) {
			min = n;
		}
	}
	printf("max : %d\nmin : %d", max, min);
}