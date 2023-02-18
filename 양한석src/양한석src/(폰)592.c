#include <stdio.h> //Àç±ÍÇÔ¼ö

int re(int n) {
	if (n > 0) {
		return (n % 10) * (n % 10) + re(n / 10);
	}
	if (n <= 0) {
		return 0;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d", re(n));
}