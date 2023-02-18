#include <stdio.h>

void listop(int n) {
	if (n > 0) {
		listop(n - 2);
		printf("%d ", n);
	}
}

int main() {
	int n;
	scanf("%d", &n);
	listop(n);
}