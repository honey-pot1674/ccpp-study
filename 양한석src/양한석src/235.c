#include <stdio.h>

int level = 0;

void op(int n) {
	if (n == 1) {
		printf("%d", level);
	}
	else if (n % 2 == 0) {
		level += 1;
		op(n / 2);
	}
	else if (n % 2 == 1) {
		level += 1;
		op(n / 3);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	op(n);
}