#include <stdio.h>

void listop(int n) {
	if (n > 1) {
		listop(n / 2);
		printf("%d ", n);
	}
	else {
		printf("1 ");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	listop(n);
}